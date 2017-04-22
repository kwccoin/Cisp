/* Generated by           cobc 2.0.0 */
/* Generated from         LISP.cbl */
/* Generated at           Apr 22 2017 16:28:41 */
/* GnuCOBOL build date    Nov 13 2016 01:30:50 */
/* GnuCOBOL package date  Nov 06 2016 22:36:19 UTC */
/* Compile command        cobc.exe -o bin\LISP.dll -std=default -Wall -debug -g -LC:\Users\laury\Documents\Computer School\Recurse Center\Cisp\subroutines\bin -L\subroutines\bin -L..\subroutines\bin LISP.cbl */


/* Module path */
static const char		*cob_module_path = NULL;

/* Number of call parameters */
static int		cob_call_params = 0;

/* Attributes */

static const cob_field_attr a_1 =	{0x21,   0,   0, 0x0000, NULL};
static const cob_field_attr a_2 =	{0x10,   1,   0, 0x0000, NULL};
static const cob_field_attr a_3 =	{0x10,   4,   0, 0x0000, NULL};
static const cob_field_attr a_4 =	{0x01,   0,   0, 0x0000, NULL};

static const cob_field_attr cob_all_attr = {0x22, 0, 0, 0, NULL};


/* Constants */
static const cob_field c_1	= {4, (cob_u8_ptr)"LISP", &a_1};
static const cob_field c_2	= {1, (cob_u8_ptr)"(", &a_1};
static const cob_field c_3	= {10, (cob_u8_ptr)"Open paren", &a_1};
static const cob_field c_4	= {1, (cob_u8_ptr)")", &a_1};
static const cob_field c_5	= {12, (cob_u8_ptr)"closed paren", &a_1};
static const cob_field c_6	= {5, (cob_u8_ptr)"PRINT", &a_1};
static const cob_field c_7	= {4, (cob_u8_ptr)"INIT", &a_1};
static const cob_field c_8	= {18, (cob_u8_ptr)"NO PREVIOUS OBJECT", &a_1};
static const cob_field c_9	= {15, (cob_u8_ptr)"PREVIOUS OBJECT", &a_1};
static const cob_field c_10	= {5, (cob_u8_ptr)"CLOSE", &a_1};
static const cob_field c_11	= {8, (cob_u8_ptr)"Command:", &a_1};
static const cob_field c_12	= {5, (cob_u8_ptr)"write", &a_1};
static const cob_field c_13	= {1, (cob_u8_ptr)"+", &a_1};
static const cob_field c_14	= {5, (cob_u8_ptr)"other", &a_1};
static const cob_field c_15	= {24, (cob_u8_ptr)"EVALUATE-CURRENT-COMMAND", &a_1};

static cob_field cob_all_space	= {1, (cob_u8_ptr)" ", &cob_all_attr};


/* Strings */
static const char st_1[]	= "LISP.cbl";
static const char st_2[]	= "Entry:     LISP";
static const char st_3[]	= "Section:   (None)";
static const char st_4[]	= "Paragraph: MAIN-PROCEDURE";
static const char st_5[]	= "MAIN-PROCEDURE";
static const char st_6[]	= "DISPLAY";
static const char st_7[]	= "PERFORM";
static const char st_8[]	= "EVALUATE";
static const char st_9[]	= "MOVE";
static const char st_10[]	= "CALL";
static const char st_11[]	= "GOBACK";
static const char st_12[]	= "Paragraph: INIT-CALL-STACK-PROCEDURE";
static const char st_13[]	= "INIT-CALL-STACK-PROCEDURE";
static const char st_14[]	= "Paragraph: INIT-RECURSION-OBJECT-PROCEDURE";
static const char st_15[]	= "INIT-RECURSION-OBJECT-PROCEDURE";
static const char st_16[]	= "IF";
static const char st_17[]	= "Paragraph: CLOSE-CALL-STACK-PROCEDURE";
static const char st_18[]	= "CLOSE-CALL-STACK-PROCEDURE";
static const char st_19[]	= "Paragraph: LOG-CURRENT-COMMAND-PROCEDURE";
static const char st_20[]	= "LOG-CURRENT-COMMAND-PROCEDURE";
static const char st_21[]	= "STRING";
static const char st_22[]	= "Paragraph: EVALUATE-CURRENT-COMMAND";
static const char st_23[]	= "EVALUATE-CURRENT-COMMAND";
static const char st_24[]	= "Paragraph: OTHER-PROCEDURES";
static const char st_25[]	= "OTHER-PROCEDURES";
static const char st_26[]	= "Exit:      LISP";

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

