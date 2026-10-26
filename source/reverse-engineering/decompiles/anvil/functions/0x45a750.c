// rea decompile_all
// name: FUN_0045a750
// address: 0x45a750
// body: available
// range: 0x45a750-0x45a7c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45a77e (push 0x45a7c9 followed by fs-segment stack chaining); handler 0x45a7c9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045a750(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;

  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  uStackY_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_2c;
  iVar1 = param_2[4];
  iVar2 = FUN_0045a588(param_1,param_3);
  param_2[4] = iVar2;
  if (iVar1 != iVar2) {
    (**(code **)(*param_2 + 0xc))();
  }
  FUN_0045a680(param_1,iVar1);
  *in_FS_OFFSET = uStackY_2c;
  uStackY_2c = 0x45a7c8;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}
