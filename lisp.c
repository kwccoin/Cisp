/* Generated by           cobc 2.0.0 */
/* Generated from         LISP.cbl */
/* Generated at           Apr 22 2017 16:28:41 */
/* GnuCOBOL build date    Nov 13 2016 01:30:50 */
/* GnuCOBOL package date  Nov 06 2016 22:36:19 UTC */
/* Compile command        cobc.exe -o bin\LISP.dll -std=default -Wall -debug -g -LC:\Users\laury\Documents\Computer School\Recurse Center\Cisp\subroutines\bin -L\subroutines\bin -L..\subroutines\bin LISP.cbl */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <math.h>
#define  COB_KEYWORD_INLINE __inline
#include <libcob.h>

#define  COB_SOURCE_FILE		"LISP.cbl"
#define  COB_PACKAGE_VERSION		"2.0"
#define  COB_PATCH_LEVEL		0
#define  COB_MODULE_FORMATTED_DATE	"Apr 22 2017 16:28:41"
#define  COB_MODULE_DATE		20170422
#define  COB_MODULE_TIME		162841

/* Global variables */
#include "LISP.c.h"

/* Function prototypes */

__declspec(dllexport) int		LISP (cob_u8_t *);
static int		LISP_ (const int, cob_u8_t *);

/* Functions */

/* PROGRAM-ID 'LISP' */

/* ENTRY 'LISP' */

int
LISP (cob_u8_t *b_19)
{
  /* Get current number of call parameters,
     if the parameter count is unknown, set it to all */
  if (cob_get_global_ptr ()->cob_current_module) {
	cob_call_params = cob_get_global_ptr ()->cob_call_params;
  } else {
	cob_call_params = 1;
  };

  return LISP_ (0, b_19);
}

static int
LISP_ (const int entry, cob_u8_t *b_19)
{
  /* Program local variables */
  #include "LISP.c.l.h"

  /* Start of function code */

  /* CANCEL callback */
  if (unlikely(entry < 0)) {
  	goto P_cancel;
  }

  /* Check initialized, check module allocated, */
  /* set global pointer, */
  /* push module stack, save call parameter count */
  cob_module_enter (&module, &cob_glob_ptr, 0);

  /* Set address of module parameter list */
  module->cob_procedure_params = cob_procedure_params;

  /* Set frame stack pointer */
  frame_ptr = frame_stack;
  frame_ptr->perform_through = 0;
  frame_overflow = frame_ptr + 255 - 1;

  /* Initialize rest of program */
  if (unlikely(initialized == 0)) {
  	goto P_initialize;
  }
  P_ret_initialize:

  /* Increment module active */
  module->module_active++;

  /* Set not passed parameter pointers to NULL */
  switch (cob_call_params) {
  case 0:
  	b_19 = NULL;
  default:
	break;
  }

  /* Entry dispatch */
  goto l_2;

  /* PROCEDURE DIVISION */

  /* Line: 37        : Entry     LISP                    : LISP.cbl */
  l_2:;
  cob_trace_section (st_2, st_1, 37);
  cob_trace_section (st_3, st_1, 37);

  /* Line: 37        : Paragraph MAIN-PROCEDURE          : LISP.cbl */
  cob_trace_section (st_4, st_1, 37);

  /* Line: 38        : DISPLAY            : LISP.cbl */
  cob_set_location (st_1, 38, NULL, st_5, st_6);
  cob_display (0, 1, 1, &c_1);

  /* Line: 39        : PERFORM            : LISP.cbl */
  cob_set_location (st_1, 39, NULL, st_5, st_7);
  /* PERFORM INIT-CALL-STACK-PROCEDURE */
  frame_ptr++;
  if (unlikely(frame_ptr == frame_overflow))
      cob_fatal_error (COB_FERROR_STACK);
  frame_ptr->perform_through = 6;
  frame_ptr->return_address_ptr = &&l_13;
  goto l_6;
  l_13:
  frame_ptr--;

  /* Line: 41        : PERFORM            : LISP.cbl */
  cob_set_location (st_1, 41, NULL, st_5, st_7);
  memcpy (b_6, "0001", 4);
  for (;;)
  {
    if (((int)cob_cmp_numdisp (b_6, 4, cob_get_llint (COB_SET_DATA (f_20, b_19)), 0) > 0))
      break;

    /* Line: 43        : EVALUATE           : LISP.cbl */
    cob_set_location (st_1, 43, NULL, st_5, st_8);

    /* WHEN */

    if (((int)cob_cmp (
    (cob_check_subscript (cob_get_numdisp (b_6, 4), 1, 40, "LS-SYMBOL"),
    COB_SET_FLD(f0, 50, b_19 + 1 + 50 * (cob_get_numdisp (b_6, 4) - 1), &a_1) ), (cob_field *)&c_2) == 0))
    {

      /* Line: 45        : DISPLAY            : LISP.cbl */
      cob_set_location (st_1, 45, NULL, st_5, st_6);
      cob_display (0, 1, 1, &c_3);
      goto l_5;
    }

    /* WHEN */

    if (((int)cob_cmp (
    (cob_check_subscript (cob_get_numdisp (b_6, 4), 1, 40, "LS-SYMBOL"),
    COB_SET_FLD(f0, 50, b_19 + 1 + 50 * (cob_get_numdisp (b_6, 4) - 1), &a_1) ), (cob_field *)&c_4) == 0))
    {

      /* Line: 47        : DISPLAY            : LISP.cbl */
      cob_set_location (st_1, 47, NULL, st_5, st_6);
      cob_display (0, 1, 1, &c_5);

      /* Line: 48        : MOVE               : LISP.cbl */
      cob_set_location (st_1, 48, NULL, st_5, st_9);
      memcpy (b_12, "REMOVE-FROM-CALL-STACK        ", 30);
      goto l_5;
    }

    /* WHEN OTHER */

    /* Line: 52        : MOVE               : LISP.cbl */
    cob_set_location (st_1, 52, NULL, st_5, st_9);
    cob_move (
    (cob_check_subscript (cob_get_numdisp (b_6, 4), 1, 40, "LS-SYMBOL"),
    COB_SET_FLD(f0, 50, b_19 + 1 + 50 * (cob_get_numdisp (b_6, 4) - 1), &a_1) ), &f_7);

    /* Line: 54        : PERFORM            : LISP.cbl */
    cob_set_location (st_1, 54, NULL, st_5, st_7);
    /* PERFORM LOG-CURRENT-COMMAND-PROCEDURE */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 9;
    frame_ptr->return_address_ptr = &&l_14;
    goto l_9;
    l_14:
    frame_ptr--;

    /* Line: 55        : PERFORM            : LISP.cbl */
    cob_set_location (st_1, 55, NULL, st_5, st_7);
    /* PERFORM EVALUATE-CURRENT-COMMAND */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 10;
    frame_ptr->return_address_ptr = &&l_15;
    goto l_10;
    l_15:
    frame_ptr--;

    /* End EVALUATE */
    l_5:;
    cob_add_int (&f_6, 1, 0);
  }

  /* Line: 57        : MOVE               : LISP.cbl */
  cob_set_location (st_1, 57, NULL, st_5, st_9);
  cob_move ((cob_field *)&c_6, &f_12);

  /* Line: 58        : CALL               : LISP.cbl */
  cob_set_location (st_1, 58, NULL, st_5, st_10);
  cob_procedure_params[0] = &f_12;
  cob_glob_ptr->cob_call_params = 1;
  if (unlikely(call_RECURSION.funcvoid == NULL || cob_glob_ptr->cob_physical_cancel)) {
    call_RECURSION.funcvoid = cob_resolve_cobol ("RECURSION", 0, 1);
  }
  b_1 = ((int (*)(void *))call_RECURSION.funcint) (b_12);

  /* Line: 59        : PERFORM            : LISP.cbl */
  cob_set_location (st_1, 59, NULL, st_5, st_7);
  /* PERFORM CLOSE-CALL-STACK-PROCEDURE */
  frame_ptr++;
  if (unlikely(frame_ptr == frame_overflow))
      cob_fatal_error (COB_FERROR_STACK);
  frame_ptr->perform_through = 8;
  frame_ptr->return_address_ptr = &&l_16;
  goto l_8;
  l_16:
  frame_ptr--;

  /* Line: 60        : GOBACK             : LISP.cbl */
  cob_set_location (st_1, 60, NULL, st_5, st_11);
  goto exit_program;

  /* Line: 61        : Paragraph INIT-CALL-STACK-PROCEDURE: LISP.cbl */
  l_6:;
  cob_trace_section (st_12, st_1, 61);

  /* Line: 63        : MOVE               : LISP.cbl */
  cob_set_location (st_1, 63, NULL, st_13, st_9);
  cob_move ((cob_field *)&c_7, &f_12);

  /* Line: 64        : CALL               : LISP.cbl */
  cob_set_location (st_1, 64, NULL, st_13, st_10);
  cob_procedure_params[0] = &f_12;
  cob_glob_ptr->cob_call_params = 1;
  if (unlikely(call_RECURSION.funcvoid == NULL || cob_glob_ptr->cob_physical_cancel)) {
    call_RECURSION.funcvoid = cob_resolve_cobol ("RECURSION", 0, 1);
  }
  b_1 = ((int (*)(void *))call_RECURSION.funcint) (b_12);

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 6)
    goto *frame_ptr->return_address_ptr;

  /* Line: 65        : Paragraph INIT-RECURSION-OBJECT-PROCEDURE: LISP.cbl */
  l_7:;
  cob_trace_section (st_14, st_1, 65);

  /* Line: 66        : IF                 : LISP.cbl */
  cob_set_location (st_1, 66, NULL, st_15, st_16);
  if (((int)cob_cmp (&f_14, &cob_all_space) == 0))
  {

    /* Line: 67        : DISPLAY            : LISP.cbl */
    cob_set_location (st_1, 67, NULL, st_15, st_6);
    cob_display (0, 1, 1, &c_8);

    /* Line: 68        : MOVE               : LISP.cbl */
    cob_set_location (st_1, 68, NULL, st_15, st_9);
    memcpy (b_13, b_7, 20);
  }
  else
  {
    /* ELSE */

    /* Line: 71        : DISPLAY            : LISP.cbl */
    cob_set_location (st_1, 71, NULL, st_15, st_6);
    cob_display (0, 1, 1, &c_9);

    /* Line: 72        : MOVE               : LISP.cbl */
    cob_set_location (st_1, 72, NULL, st_15, st_9);
    memcpy (b_12, "ADD-TO-CALL-STACK             ", 30);

    /* Line: 73        : CALL               : LISP.cbl */
    cob_set_location (st_1, 73, NULL, st_15, st_10);
    cob_procedure_params[0] = &f_12;
    cob_procedure_params[1] = &f_13;
    cob_glob_ptr->cob_call_params = 2;
    if (unlikely(call_RECURSION.funcvoid == NULL || cob_glob_ptr->cob_physical_cancel)) {
      call_RECURSION.funcvoid = cob_resolve_cobol ("RECURSION", 0, 1);
    }
    b_1 = ((int (*)(void *, void *))call_RECURSION.funcint) (b_12, b_13);

    /* Line: 76        : MOVE               : LISP.cbl */
    cob_set_location (st_1, 76, NULL, st_15, st_9);
    memcpy (b_13, b_7, 20);
  }

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 7)
    goto *frame_ptr->return_address_ptr;

  /* Line: 78        : Paragraph CLOSE-CALL-STACK-PROCEDURE: LISP.cbl */
  l_8:;
  cob_trace_section (st_17, st_1, 78);

  /* Line: 79        : MOVE               : LISP.cbl */
  cob_set_location (st_1, 79, NULL, st_18, st_9);
  cob_move ((cob_field *)&c_10, &f_12);

  /* Line: 80        : CALL               : LISP.cbl */
  cob_set_location (st_1, 80, NULL, st_18, st_10);
  cob_procedure_params[0] = &f_12;
  cob_glob_ptr->cob_call_params = 1;
  if (unlikely(call_RECURSION.funcvoid == NULL || cob_glob_ptr->cob_physical_cancel)) {
    call_RECURSION.funcvoid = cob_resolve_cobol ("RECURSION", 0, 1);
  }
  b_1 = ((int (*)(void *))call_RECURSION.funcint) (b_12);

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 8)
    goto *frame_ptr->return_address_ptr;

  /* Line: 81        : Paragraph LOG-CURRENT-COMMAND-PROCEDURE: LISP.cbl */
  l_9:;
  cob_trace_section (st_19, st_1, 81);

  /* Line: 83        : MOVE               : LISP.cbl */
  cob_set_location (st_1, 83, NULL, st_20, st_9);
  memcpy (b_8, "ADD  ", 5);

  /* Line: 84        : MOVE               : LISP.cbl */
  cob_set_location (st_1, 84, NULL, st_20, st_9);
  cob_move ((cob_field *)&c_1, &f_10);

  /* Line: 86        : STRING             : LISP.cbl */
  cob_set_location (st_1, 86, NULL, st_20, st_21);
  cob_string_init (&f_11, NULL);
  cob_string_delimited (NULL);
  cob_string_append ((cob_field *)&c_11);
  cob_string_delimited (NULL);
  cob_string_append (&f_7);
  cob_string_finish ();

  /* Line: 89        : CALL               : LISP.cbl */
  cob_set_location (st_1, 89, NULL, st_20, st_10);
  cob_procedure_params[0] = &f_8;
  cob_procedure_params[1] = &f_9;
  cob_glob_ptr->cob_call_params = 2;
  if (unlikely(call_LOGGER.funcvoid == NULL || cob_glob_ptr->cob_physical_cancel)) {
    call_LOGGER.funcvoid = cob_resolve_cobol ("LOGGER", 0, 1);
  }
  b_1 = ((int (*)(void *, void *))call_LOGGER.funcint) (b_8, b_9);

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 9)
    goto *frame_ptr->return_address_ptr;

  /* Line: 90        : Paragraph EVALUATE-CURRENT-COMMAND: LISP.cbl */
  l_10:;
  cob_trace_section (st_22, st_1, 90);

  /* Line: 91        : EVALUATE           : LISP.cbl */
  cob_set_location (st_1, 91, NULL, st_23, st_8);

  /* WHEN */

  if (((int)cob_cmp (&f_7, (cob_field *)&c_12) == 0))
  {

    /* Line: 93        : DISPLAY            : LISP.cbl */
    cob_set_location (st_1, 93, NULL, st_23, st_6);
    cob_display (0, 1, 1, &c_12);

    /* Line: 94        : PERFORM            : LISP.cbl */
    cob_set_location (st_1, 94, NULL, st_23, st_7);
    /* PERFORM INIT-RECURSION-OBJECT-PROCEDURE */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 7;
    frame_ptr->return_address_ptr = &&l_17;
    goto l_7;
    l_17:
    frame_ptr--;
    goto l_11;
  }

  /* WHEN */

  if (((int)cob_cmp (&f_7, (cob_field *)&c_13) == 0))
  {

    /* Line: 97        : DISPLAY            : LISP.cbl */
    cob_set_location (st_1, 97, NULL, st_23, st_6);
    cob_display (0, 1, 1, &c_13);

    /* Line: 98        : PERFORM            : LISP.cbl */
    cob_set_location (st_1, 98, NULL, st_23, st_7);
    /* PERFORM INIT-RECURSION-OBJECT-PROCEDURE */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 7;
    frame_ptr->return_address_ptr = &&l_18;
    goto l_7;
    l_18:
    frame_ptr--;
    goto l_11;
  }

  /* WHEN OTHER */

  /* Line: 104       : DISPLAY            : LISP.cbl */
  cob_set_location (st_1, 104, NULL, st_23, st_6);
  cob_display (0, 1, 1, &c_14);

  /* End EVALUATE */
  l_11:;

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 10)
    goto *frame_ptr->return_address_ptr;

  /* Line: 115       : Paragraph OTHER-PROCEDURES        : LISP.cbl */
  cob_trace_section (st_24, st_1, 115);

  /* Line: 148       : MOVE               : LISP.cbl */
  cob_set_location (st_1, 148, NULL, st_25, st_9);
  cob_move ((cob_field *)&c_15, &f_10);

  /* Program exit */

  exit_program:

  /* Decrement module active count */
  if (module->module_active) {
  	module->module_active--;
  }

  /* Trace program exit */
  cob_trace_section (st_26, NULL, 0);

  /* Pop module stack */
  cob_module_leave (module);

  /* Program return */
  return b_1;

  /* Program initialization */
  P_initialize:

  cob_check_version (COB_SOURCE_FILE, COB_PACKAGE_VERSION, COB_PATCH_LEVEL);

  /* Initialize module structure */
  module->module_name = "LISP";
  module->module_formatted_date = COB_MODULE_FORMATTED_DATE;
  module->module_source = COB_SOURCE_FILE;
  module->module_entry.funcptr = (void *(*)())LISP;
  module->module_cancel.funcptr = (void *(*)())LISP_;
  module->collating_sequence = NULL;
  module->crt_status = NULL;
  module->cursor_pos = NULL;
  module->module_ref_count = NULL;
  module->module_path = &cob_module_path;
  module->module_active = 0;
  module->module_date = COB_MODULE_DATE;
  module->module_time = COB_MODULE_TIME;
  module->module_type = 0;
  module->module_param_cnt = 1;
  module->module_returning = 0;
  module->ebcdic_sign = 0;
  module->decimal_point = '.';
  module->currency_symbol = '$';
  module->numeric_separator = ',';
  module->flag_filename_mapping = 1;
  module->flag_binary_truncate = 1;
  module->flag_pretty_display = 1;
  module->flag_host_sign = 0;
  module->flag_no_phys_canc = 0;
  module->flag_main = 0;
  module->flag_fold_call = 0;
  module->flag_exit_program = 0;

  /* Initialize cancel callback */
  cob_set_cancel (module);

  /* Initialize WORKING-STORAGE */
  b_1 = 0;
  memset (b_6, 48, 4);
  memset (b_7, 32, 100);
  memset (b_8, 32, 5);
  memset (b_9, 32, 140);
  memset (b_12, 32, 30);
  memset (b_13, 32, 41);

  initialized = 1;
  goto P_ret_initialize;

  /* CANCEL callback handling */
  P_cancel:

  if (!initialized) {
  	return 0;
  }
  if (module->module_active) {
  	cob_fatal_error (COB_FERROR_CANCEL);
  }

  call_LOGGER.funcvoid = NULL;
  call_RECURSION.funcvoid = NULL;
  b_1 = 0;
  cob_cache_free (module);
  module = NULL;

  initialized = 0;
  return 0;

}

/* End PROGRAM-ID 'LISP' */

/* End functions */

