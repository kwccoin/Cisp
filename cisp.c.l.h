/* Generated by           cobc 2.0.0 */
/* Generated from         cisp.cbl */
/* Generated at           Apr 22 2017 14:37:43 */
/* GnuCOBOL build date    Nov 13 2016 01:30:50 */
/* GnuCOBOL package date  Nov 06 2016 22:36:19 UTC */
/* Compile command        cobc.exe -x -o bin\cisp.exe -std=default -Wall -debug -g -LC:\Users\laury\Documents\Computer School\Recurse Center\Cisp\subroutines\bin -L\subroutines\bin -L..\subroutines\bin cisp.cbl */

/* Program local variables for 'CISP' */

/* Module initialization indicator */
static unsigned int	initialized = 0;

/* Module structure pointer */
static cob_module	*module = NULL;

/* Global variable pointer */
cob_global		*cob_glob_ptr;


/* Call pointers */
static cob_call_union	call_LOGGER;
static cob_call_union	call_TOKENIZER;

/* Local cob_field items */
cob_field		f0;


/* Call parameters */
cob_field		*cob_procedure_params[2];

/* Perform frame stack */
struct cob_frame	*frame_overflow;
struct cob_frame	*frame_ptr;
struct cob_frame	frame_stack[255];


/* Data storage */
static int	b_1;	/* RETURN-CODE */
static cob_u8_t	b_6[5] __attribute__((aligned));	/* WS-LOG-OPERATION-FLAG */
static cob_u8_t	b_7[140] __attribute__((aligned));	/* WS-LOG-RECORD */
static cob_u8_t	b_11[2001] __attribute__((aligned));	/* WS-LISP-SYMBOLS */

/* End of data storage */


/* Fields */
static cob_field f_6	= {5, b_6, &a_1};	/* WS-LOG-OPERATION-FLAG */
static cob_field f_7	= {140, b_7, &a_2};	/* WS-LOG-RECORD */
static cob_field f_8	= {40, b_7, &a_1};	/* WS-LOG-RECORD-FUNCTION-NAME */
static cob_field f_9	= {100, b_7 + 40, &a_1};	/* WS-LOG-RECORD-MESSAGE */
static cob_field f_11	= {2001, b_11, &a_2};	/* WS-LISP-SYMBOLS */

/* End of fields */

