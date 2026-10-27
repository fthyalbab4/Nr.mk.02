// rea decompile_all
// name: FUN_0044ed40
// address: 0x44ed40
// body: available
// range: 0x44ed40-0x44ede3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44ed61 (push 0x44ede4 followed by fs-segment stack chaining); handler 0x44ede4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044ed40(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined2 param_5)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int *local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  puStack_28 = &LAB_0044ede4;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puVar1 = &stack0xfffffffc;
  if (param_3 != 0) {
    FUN_00407eb8(param_1 + 0x20,param_3);
    puVar1 = puStack_24;
  }
  puStack_24 = puVar1;
  iVar5 = *(int *)(*(int *)(param_1 + 0x10) + 8);
  if (-1 < iVar5 + -1) {
    iVar6 = 0;
    do {
      iVar3 = FUN_0043b048(*(undefined4 *)(param_1 + 0x10),iVar6);
      uVar7 = *(undefined4 *)(iVar3 + 4);
      uVar4 = FUN_0040b140(&local_8);
      cVar2 = FUN_0041ef90(uVar7,&LAB_0044edf8,uVar4);
      if (cVar2 != '\0') {
        (**(code **)(*local_8 + 0x40))(local_8,param_2,param_3,param_4,param_5);
        break;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0044edeb;
  puStack_28 = (undefined1 *)0x44ede3;
  FUN_0040b140(&local_8,uStack_2c,puVar1);
  return;
}
