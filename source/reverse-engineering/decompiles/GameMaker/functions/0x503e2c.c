// rea decompile_all
// name: FUN_00503e2c
// address: 0x503e2c
// body: available
// range: 0x503e2c-0x503e91 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00503e2c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 char param_5,undefined1 *param_6)

{
  char cVar1;
  int iVar2;

  if ((param_5 == '\0') || (param_6 == (undefined1 *)0x0)) {
    cVar1 = '\x01';
  }
  else {
    FUN_00503b38(param_1,*param_6,param_3,*(undefined4 *)(param_6 + 4),*(undefined4 *)(param_6 + 8))
    ;
    iVar2 = (**(code **)PTR_DAT_00781a60)();
    cVar1 = '\x01' - (iVar2 == 0);
  }
  if (cVar1 != '\0') {
    (**(code **)PTR_DAT_007821d4)();
  }
  return;
}
