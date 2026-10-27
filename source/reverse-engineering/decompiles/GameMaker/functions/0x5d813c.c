// rea decompile_all
// name: FUN_005d813c
// address: 0x5d813c
// body: available
// range: 0x5d813c-0x5d8226 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d8157 (push 0x5d8244 followed by fs-segment stack chaining); handler 0x5d8244 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d8177 (push 0x5d8227 followed by fs-segment stack chaining); handler 0x5d8227 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d813c(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  BSTR bstrString;
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_3c;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  byte local_10;
  int *local_8;

  puStack_28 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  puStack_2c = &LAB_005d8244;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  bstrString = (BSTR)FUN_004093e8(*(undefined4 *)(param_4 + -8));
  uStackY_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_3c;
  iVar2 = 0;
  if (0 < *(int *)(param_4 + -0xc)) {
    do {
      (**(code **)(*(int *)*param_2 + 0x24))();
      FUN_005b641c();
      if ((local_10 & 3) != 0) {
        (**(code **)(*(int *)*param_2 + 0x20))();
        FUN_005b641c();
        FUN_0040b140(&local_8);
        (**(code **)(*(int *)*param_2 + 0x38))();
        FUN_005b641c();
        iVar1 = (**(code **)(*local_8 + 0x28))();
        if (iVar1 != -0x7ffdfffa) {
          FUN_005b641c(iVar1);
          FUN_005d8134(param_2,&local_8);
          break;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_4 + -0xc));
  }
  *in_FS_OFFSET = uStackY_3c;
  uStackY_3c = 0x5d8226;
  SysFreeString(bstrString);
  return;
}
