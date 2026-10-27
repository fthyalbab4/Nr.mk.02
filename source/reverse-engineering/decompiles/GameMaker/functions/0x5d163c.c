// rea decompile_all
// name: FUN_005d163c
// address: 0x5d163c
// body: available
// range: 0x5d163c-0x5d1750 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d165a (push 0x5d1751 followed by fs-segment stack chaining); handler 0x5d1751 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d163c(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  puStack_28 = &LAB_005d1751;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  iVar4 = FUN_005d1424(param_1,param_2);
  if (-1 < iVar4) {
    *(undefined4 *)(param_1[1] + iVar4 * 0xc) = 0;
    FUN_00406f0c(&local_8,*(undefined4 *)(param_1[1] + 8 + iVar4 * 0xc));
    iVar6 = iVar4;
    while( true ) {
      iVar4 = iVar4 + 1;
      iVar5 = FUN_00409a18(param_1[1]);
      if (iVar4 == iVar5) {
        iVar4 = 0;
      }
      uVar1 = *(uint *)(param_1[1] + iVar4 * 0xc);
      if (uVar1 == 0) break;
      iVar5 = FUN_00409a18(param_1[1]);
      cVar3 = FUN_00528564(iVar6,iVar5 - 1U & uVar1,iVar4);
      if (cVar3 == '\0') {
        FUN_00409084(param_1[1] + iVar6 * 0xc,param_1[1] + iVar4 * 0xc,&DAT_005cc39c);
        *(undefined4 *)(param_1[1] + iVar4 * 0xc) = 0;
        iVar6 = iVar4;
      }
    }
    *(undefined4 *)(param_1[1] + iVar6 * 0xc) = 0;
    FUN_00406e5c(param_1[1] + 4 + iVar6 * 0xc);
    FUN_00406e5c(param_1[1] + 8 + iVar6 * 0xc);
    param_1[2] = param_1[2] + -1;
    (**(code **)(*param_1 + 4))(param_1,param_2,param_4);
    (**(code **)(*param_1 + 8))(param_1,local_8,param_4);
  }
  puVar2 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_005d1758;
  puStack_28 = (undefined1 *)0x5d1750;
  FUN_00406e5c(&local_8,uStack_2c,puVar2);
  return;
}
