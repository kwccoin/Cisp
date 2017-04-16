      ******************************************************************
      * Author: Lauryn Brown
      * Date: 2017
      * Purpose: COBOL Common Lisp Interpreter
      * Tectonics: cobc
      ******************************************************************
       IDENTIFICATION DIVISION.
       PROGRAM-ID. CISP.
       ENVIRONMENT DIVISION.
       INPUT-OUTPUT SECTION.
       FILE-CONTROL.
           SELECT LISP-FILE ASSIGN TO DYNAMIC LISP-NAME
               ORGANISATION IS LINE SEQUENTIAL.
       DATA DIVISION.
       FILE SECTION.
           FD LISP-FILE.
           01 IN-LISP-RECORD PIC X(2000).
       WORKING-STORAGE SECTION.
       01 WS-SYMBOL-LENGTH PIC 9(10) VALUE 5.
       01 WS-LISP-SYMBOLS.
           02 WS-SYMBOL PIC X(100) OCCURS 5 TIMES.
       01 WS-COUNT PIC 9(10).
       01 STRING-PTR PIC 9(10).
       01 WS-TEMP-NUM PIC 9(10).
       01 WS-SYMBOL-FLAGS.
           02 WS-OPEN-PAREN PIC X.
               88 WS-OPEN-PAREN-YES VALUE 'Y', FALSE 'N'.
           02 WS-CLOSE-PAREN PIC X.
               88 WS-CLOSE-PAREN-YES VALUE 'Y', FALSE 'N'.
      *     02 WS-SYMBOL-SUBSCRIPT PIC S9(3) COMP-3.
       01 WS-PARSE-STR.
           02 WS-PARSE-STR-INDEX PIC 9(5).
           02 WS-PARSE-STR-END PIC X.
               88 WS-PARSE-HAS-ENDED VALUE 'Y', FALSE 'N'.
           02 WS-PARSE-STR-CHAR PIC X.
           02 WS-PARSE-EXPRESSION-START PIC 9(5).

       PROCEDURE DIVISION.
       MAIN-PROCEDURE.
           PERFORM FILE-HANDLING-PROCEDURE.
           PERFORM LISP-PROCEDURE.
           STOP RUN.
       GET-FILE-NAME-PROCEDURE.
           ACCEPT LISP-NAME.
           IF LISP-NAME EQUALS SPACES THEN
               MOVE "..\test\arithmetic.lisp" TO LISP-NAME
           END-IF.
       FILE-HANDLING-PROCEDURE.
           PERFORM GET-FILE-NAME-PROCEDURE.
           OPEN INPUT LISP-FILE.
           READ LISP-FILE.
           DISPLAY IN-LISP-RECORD.
           CLOSE LISP-FILE.
       LISP-PROCEDURE.
           PERFORM UNSTRING-LISP-PROCEDURE.
           PERFORM EVALUATE-LISP-PRCEDURE.
       EVALUATE-LISP-PRCEDURE.
           PERFORM VARYING WS-COUNT FROM 1 BY 1 UNTIL
           WS-COUNT > WS-SYMBOL-LENGTH
               DISPLAY WS-SYMBOL(WS-COUNT)
               PERFORM PARSE-STRING-PROCEDURE
               PERFORM PRINT-PARSE-STATE-PROCEDURE
           END-PERFORM.
       RESET-PARSE-FLAGS-PROCEDURE.
           SET WS-OPEN-PAREN-YES TO FALSE.
           SET WS-CLOSE-PAREN-YES TO FALSE.
           MOVE 0 TO WS-PARSE-EXPRESSION-START.
       PRINT-PARSE-STATE-PROCEDURE.
           DISPLAY 'Open Paren:' WS-OPEN-PAREN.
           DISPLAY 'Close Paren:' WS-CLOSE-PAREN.
           DISPLAY 'Expression Start:' WS-PARSE-EXPRESSION-START.
       PARSE-STRING-PROCEDURE.
           PERFORM RESET-PARSE-FLAGS-PROCEDURE.
           MOVE 1 TO WS-PARSE-STR-INDEX.
           SET WS-PARSE-HAS-ENDED TO FALSE.
           PERFORM VARYING WS-PARSE-STR-INDEX FROM 1 BY 1
           UNTIL WS-PARSE-HAS-ENDED
              MOVE WS-SYMBOL(WS-COUNT)(WS-PARSE-STR-INDEX:1)
              TO WS-PARSE-STR-CHAR
              EVALUATE WS-PARSE-STR-CHAR
              WHEN '('
                  SET WS-OPEN-PAREN-YES TO TRUE
                  MOVE WS-PARSE-STR-INDEX TO WS-PARSE-EXPRESSION-START
              WHEN ')'
                   SET WS-CLOSE-PAREN-YES TO TRUE
              WHEN ' '
                   SET WS-PARSE-HAS-ENDED TO TRUE
           END-PERFORM.
       UNSTRING-LISP-PROCEDURE.
           MOVE 1 TO STRING-PTR.
           PERFORM VARYING WS-COUNT FROM 1 BY 1 UNTIL
             WS-COUNT > WS-SYMBOL-LENGTH
               UNSTRING IN-LISP-RECORD DELIMITED BY ALL ' ' INTO
               WS-SYMBOL(WS-COUNT) WITH POINTER STRING-PTR
           END-PERFORM.
           DISPLAY "LISP PROCEDURE".
           PERFORM PRINT-SYMBOL-TABLE.
       PRINT-SYMBOL-TABLE.
           MOVE 1 TO WS-COUNT.
           PERFORM VARYING WS-COUNT FROM 1 BY 1 UNTIL
           WS-COUNT GREATER THAN WS-SYMBOL-LENGTH
               DISPLAY WS-COUNT
               DISPLAY WS-SYMBOL(WS-COUNT)
           END-PERFORM.
       END PROGRAM CISP.
