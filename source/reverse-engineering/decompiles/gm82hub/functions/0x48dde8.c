// rea decompile_all
// name: FUN_0048dde8
// address: 0x48dde8
// body: available
// range: 0x48dde8-0x48deb5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x48de0c (push 0x48deb6 followed by fs-segment stack chaining); handler 0x48deb6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048dde8(char *param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  int local_8;

  puStack_18 = (undefined1 *)0x48de01;
  local_8 = param_2;
  FUN_00409e6c(param_2);
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  for (; param_3 < param_4 + -1; param_3 = param_3 + 2) {
    if ((*(char *)(local_8 + param_3) == '\n') && (*(char *)(local_8 + 1 + param_3) == '\0')) {
      *param_1 = '\r';
      param_1[1] = '\0';
      param_1[2] = '\n';
      param_1[3] = '\0';
      pcVar1 = param_1 + 4;
    }
    else {
      *param_1 = *(char *)(local_8 + param_3);
      param_1[1] = *(char *)(local_8 + 1 + param_3);
      pcVar1 = param_1 + 2;
      if ((*(char *)(local_8 + param_3) == '\r') && (*(char *)(local_8 + 1 + param_3) == '\0')) {
        *pcVar1 = '\n';
        param_1[3] = '\0';
        pcVar1 = param_1 + 4;
        if ((*(char *)(local_8 + 2 + param_3) == '\n') && (*(char *)(local_8 + 3 + param_3) == '\0')
           ) {
          param_3 = param_3 + 2;
        }
      }
    }
    param_1 = pcVar1;
  }
  if (param_3 == param_4 + -1) {
    *param_1 = *(char *)(local_8 + param_3);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0048debd;
  uStack_1c = 0x48deb5;
  FUN_00409e08(&local_8,&DAT_00410758,&stack0xfffffffc);
  return;
}
