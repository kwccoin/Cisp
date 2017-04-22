/* Generated by           cobc 2.0.0 */
/* Generated from         TOKENIZER.cbl */
/* Generated at           Apr 22 2017 14:37:44 */
/* GnuCOBOL build date    Nov 13 2016 01:30:50 */
/* GnuCOBOL package date  Nov 06 2016 22:36:19 UTC */
/* Compile command        cobc.exe -o bin\TOKENIZER.dll -std=default -Wall -debug -g -LC:\Users\laury\Documents\Computer School\Recurse Center\Cisp\subroutines\bin -L\subroutines\bin -L..\subroutines\bin TOKENIZER.cbl */


/* Module path */
static const char		*cob_module_path = NULL;

/* Number of call parameters */
static int		cob_call_params = 0;

/* Attributes */

static const cob_field_attr a_1 =	{0x21,   0,   0, 0x0000, NULL};
static const cob_field_attr a_2 =	{0x01,   0,   0, 0x0000, NULL};
static const cob_field_attr a_3 =	{0x10,   1,   0, 0x0000, NULL};
static const cob_field_attr a_4 =	{0x10,  10,   0, 0x0000, NULL};
static const cob_field_attr a_5 =	{0x10,   5,   0, 0x0000, NULL};

static const cob_field_attr cob_all_attr = {0x22, 0, 0, 0, NULL};


/* Constants */
static const cob_field c_1	= {9, (cob_u8_ptr)"Tokenizer", &a_1};
static const cob_field c_2	= {27, (cob_u8_ptr)"COMPLETED reading LISP-FILE", &a_1};
static const cob_field c_3	= {1, (cob_u8_ptr)" ", &a_1};
static const cob_field c_4	= {25, (cob_u8_ptr)"COMPLETED tokenizing lisp", &a_1};
static const cob_field c_5	= {2, (cob_u8_ptr)"( ", &a_1};
static const cob_field c_6	= {44, (cob_u8_ptr)"COMPLETED formatting lisp string for parsing", &a_1};
static const cob_field c_7	= {11, (cob_u8_ptr)"Open Paren:", &a_1};
static const cob_field c_8	= {12, (cob_u8_ptr)"Close Paren:", &a_1};
static const cob_field c_9	= {17, (cob_u8_ptr)"Expression Start:", &a_1};
static const cob_field c_10	= {15, (cob_u8_ptr)"Expression END:", &a_1};
static const cob_field c_11	= {18, (cob_u8_ptr)"Expression Length:", &a_1};
static const cob_field c_12	= {8, (cob_u8_ptr)"OTHER!!!", &a_1};
static const cob_field c_13	= {31, (cob_u8_ptr)"FINISHED PARSE-STRING-PROCEDURE", &a_1};
static const cob_field c_14	= {6, (cob_u8_ptr)"INDEX:", &a_1};
static const cob_field c_15	= {6, (cob_u8_ptr)" SIZE:", &a_1};
static const cob_field c_16	= {8, (cob_u8_ptr)" LENGTH:", &a_1};
static const cob_field c_17	= {12, (cob_u8_ptr)"Parse start:", &a_1};
static const cob_field c_18	= {6, (cob_u8_ptr)" end: ", &a_1};
static const cob_field c_19	= {6, (cob_u8_ptr)" len: ", &a_1};

static cob_field cob_all_space	= {1, (cob_u8_ptr)" ", &cob_all_attr};


/* Strings */
static const char st_1[]	= "TOKENIZER.cbl";
static const char st_2[]	= "Entry:     TOKENIZER";
static const char st_3[]	= "Section:   (None)";
static const char st_4[]	= "Paragraph: MAIN-PROCEDURE";
static const char st_5[]	= "MAIN-PROCEDURE";
static const char st_6[]	= "DISPLAY";
static const char st_7[]	= "PERFORM";
static const char st_8[]	= "GOBACK";
static const char st_9[]	= "Paragraph: FILE-HANDLING-PROCEDURE";
static const char st_10[]	= "FILE-HANDLING-PROCEDURE";
static const char st_11[]	= "ACCEPT";
static const char st_12[]	= "IF";
static const char st_13[]	= "MOVE";
static const char st_14[]	= "OPEN";
static const char st_15[]	= "READ";
static const char st_16[]	= "CLOSE";
static const char st_17[]	= "CALL";
static const char st_18[]	= "Paragraph: TOKENIZE-LISP-PROCEDURE";
static const char st_19[]	= "TOKENIZE-LISP-PROCEDURE";
static const char st_20[]	= "SET";
static const char st_21[]	= "UNSTRING";
static const char st_22[]	= "ADD";
static const char st_23[]	= "Paragraph: PRINT-SYMBOL-TABLE";
static const char st_24[]	= "PRINT-SYMBOL-TABLE";
static const char st_25[]	= "Paragraph: FORMAT-LISP-PROCEDURE";
static const char st_26[]	= "FORMAT-LISP-PROCEDURE";
static const char st_27[]	= "STRING";
static const char st_28[]	= "EVALUATE";
static const char st_29[]	= "Paragraph: CALC-LISP-LENGTH";
static const char st_30[]	= "CALC-LISP-LENGTH";
static const char st_31[]	= "Paragraph: RESET-PARSE-FLAGS-PROCEDURE";
static const char st_32[]	= "RESET-PARSE-FLAGS-PROCEDURE";
static const char st_33[]	= "Paragraph: PRINT-PARSE-FLAGS-PROCEDURE";
static const char st_34[]	= "PRINT-PARSE-FLAGS-PROCEDURE";
static const char st_35[]	= "Paragraph: PARSE-STRING-PROCEDURE";
static const char st_36[]	= "PARSE-STRING-PROCEDURE";
static const char st_37[]	= "SUBTRACT";
static const char st_38[]	= "Paragraph: FORMAT-CHECK-PAREN-PROCEDURE";
static const char st_39[]	= "FORMAT-CHECK-PAREN-PROCEDURE";
static const char st_40[]	= "Paragraph: FORMAT-ADD-LEFT-SPACE";
static const char st_41[]	= "FORMAT-ADD-LEFT-SPACE";
static const char st_42[]	= "Paragraph: FORMAT-ADD-RIGHT-SPACE";
static const char st_43[]	= "FORMAT-ADD-RIGHT-SPACE";
static const char st_44[]	= "Paragraph: FORMAT-ADD-BOTH-SPACES";
static const char st_45[]	= "FORMAT-ADD-BOTH-SPACES";
static const char st_46[]	= "Paragraph: FORMAT-PAREN-SPACE-PROCEDURE";
static const char st_47[]	= "FORMAT-PAREN-SPACE-PROCEDURE";
static const char st_48[]	= "Exit:      TOKENIZER";

static int COB_NOINLINE
cob_get_numdisp (const void *data, const size_t size)
{
	const unsigned char	*p;
	size_t			n;
	int    			 retval;
	p = (const unsigned char *)data;
	retval = 0;
	for (n = 0; n < size; ++n, ++p) {
		retval *= 10;
		retval += (*p & 0x0F);
	}
	return retval;
}

