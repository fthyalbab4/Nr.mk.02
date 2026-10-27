// rea decompile_all
// name: FUN_00442000
// address: 0x442000
// body: available
// range: 0x442000-0x4420ae inclusive
// range: 0x4420b6-0x4420c7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x442049 (push 0x4420af followed by fs-segment stack chaining); handler 0x4420af lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00442000(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;

  puStack_24 = (undefined1 *)0x44201e;
  iVar4 = FUN_0042ba48(*(undefined4 *)(*param_2 + -0x48));
  iVar4 = (int)*(short *)(iVar4 + 8);
  if (iVar4 < 1) {
    puStack_24 = (undefined1 *)0x4420c1;
    (**(code **)(*param_2 + 4))(param_2,param_1);
    return;
  }
  puStack_24 = (undefined1 *)0x44203b;
  iVar5 = FUN_00404324(iVar4 * 4);
  puStack_28 = &LAB_004420af;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  FUN_0042bde8(*(undefined4 *)(*param_2 + -0x48),iVar5);
  if (-1 < iVar4 + -1) {
    iVar7 = 0;
    iVar6 = iVar4;
    do {
      iVar1 = *(int *)(iVar5 + iVar7 * 4);
      if (iVar1 == 0) break;
      cVar3 = FUN_0042be3c(param_2,iVar1);
      if (cVar3 != '\0') {
        FUN_00443158(param_1,param_2,iVar1);
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  puVar2 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = (undefined1 *)0x4420b6;
  puStack_28 = (undefined1 *)0x4420ae;
  FUN_00404340(iVar5,iVar4 * 4,puVar2);
  return;
}
