// rea decompile_all
// name: FUN_004e2d58
// address: 0x4e2d58
// body: available
// range: 0x4e2d58-0x4e2da5 inclusive
// range: 0x4e2dbe-0x4e2e68 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_004e2d58(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  char cVar1;

  *param_2 = *param_2 & 0x7f3bff7f;
  *param_3 = *param_3 & 0xfffffe7e;
  *param_4 = *param_4 & 0xffffd7ff;
  cVar1 = *(char *)(param_1 + 0x299);
  if ((*(char *)(param_1 + 0x29e) == '\x01') && ((cVar1 == '\0' || (cVar1 == '\x03')))) {
    cVar1 = '\x02';
  }
  switch(cVar1) {
  case '\0':
    if ((*(int *)(param_1 + 0x34) == 0) && (*(int *)(param_1 + 0x1d4) == 0)) {
      *param_2 = *param_2 | 0x80000000;
    }
    break;
  case '\x01':
  case '\x04':
    *param_2 = *param_2 | 0xc00000;
    break;
  case '\x02':
  case '\x05':
    *param_2 = *param_2 | 0xc40000;
    break;
  case '\x03':
    if (((*(byte *)(param_1 + 0x1c) & 0x10) == 0) || (*(int *)(param_1 + 0x34) == 0)) {
      *param_2 = *param_2 | 0x80c00000;
    }
    else {
      *param_2 = *param_2 | 0xc00000;
    }
    *param_3 = *param_3 | 0x101;
    if (*PTR_DAT_00688e94 == '\0') {
      *param_2 = *param_2 | 0x400080;
    }
    *param_4 = *param_4 | 0x2808;
  }
  if (((byte)(cVar1 - 4U) < 2) && (*(char *)(param_1 + 0x29e) != '\x01')) {
    *param_3 = *param_3 | 0x80;
  }
  return cVar1 + -6;
}
