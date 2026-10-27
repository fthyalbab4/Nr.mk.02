// rea decompile_all
// name: FUN_005655ac
// address: 0x5655ac
// body: available
// range: 0x5655ac-0x56571c inclusive
// range: 0x565766-0x5657e5 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5655d0 (push 0x5657e6 followed by fs-segment stack chaining); handler 0x5657e6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x565705 (push 0x56571d followed by fs-segment stack chaining); handler 0x56571d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005655ac(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 unaff_ESI;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined *puVar6;
  undefined4 uVar7;
  wchar_t *pwVar8;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  wchar_t *local_28;
  undefined1 *local_24;
  undefined4 uStack_20;
  undefined4 local_8;

  uStack_20 = &stack0xfffffffc;
  iVar4 = 6;
  do {
    local_8 = 0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_24 = &LAB_005657e6;
  local_28 = (wchar_t *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_2c = (undefined1 *)0x5655e4;
  FUN_0052f12c(param_2,700);
  local_2c = (undefined1 *)0x5655f2;
  FUN_0052f168(param_2,*(undefined4 *)(param_1 + 4));
  local_2c = (undefined1 *)0x565600;
  FUN_0052f168(param_2,*(undefined4 *)(param_1 + 8));
  local_2c = (undefined1 *)0x56560e;
  FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x34));
  iVar4 = *(int *)(param_1 + 0x34);
  if (-1 < iVar4 + -1) {
    iVar5 = 0;
    do {
      local_2c = (undefined1 *)0x56562d;
      FUN_00564b2c(*(undefined4 *)(*(int *)(param_1 + 0x30) + iVar5 * 4),param_2);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_2c = (undefined1 *)0x56563d;
  piVar3 = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
  local_2c = (undefined1 *)0x56564f;
  FUN_00520290(*(undefined4 *)PTR_DAT_00782280,&local_28);
  local_2c = (undefined1 *)0x56565a;
  FUN_0041735c(local_28,&local_24);
  local_2c = (undefined1 *)0x565667;
  FUN_004082dc(&local_24,L"extensions\\");
  local_2c = (undefined1 *)0x565672;
  (**(code **)(*piVar3 + 0x38))(piVar3,local_24);
  local_2c = (undefined1 *)0x56567f;
  (**(code **)(*piVar3 + 0xc))(piVar3,0,&local_2c);
  puVar1 = local_2c;
  local_2c = (undefined1 *)0x565687;
  cVar2 = FUN_00416e88(puVar1);
  if (cVar2 != '\0') {
    local_2c = (undefined1 *)0x56569d;
    (**(code **)(*piVar3 + 0x38))(piVar3,DAT_0078898c);
    local_2c = (undefined1 *)0x5656a5;
    iVar4 = (**(code **)(*piVar3 + 0x14))();
    if (-1 < iVar4 + -1) {
      iVar5 = 0;
      do {
        local_2c = (undefined1 *)0x5656c0;
        (**(code **)(*piVar3 + 0xc))(piVar3,iVar5,&local_30);
        uStack_20 = local_30;
        local_24 = *(undefined1 **)(param_1 + 4);
        local_28 = L".dat";
        local_2c = (undefined1 *)0x5656db;
        FUN_00408480(&local_8,3);
        local_2c = (undefined1 *)0x5656e3;
        cVar2 = FUN_00416e40(local_8);
        if (cVar2 != '\0') {
          uStack_20 = (undefined1 *)CONCAT13(1,(undefined3)uStack_20);
          local_2c = (undefined1 *)0x5656f7;
          unaff_ESI = FUN_00405a4c(&LAB_0052e8fc,1);
          local_30 = &LAB_0056571d;
          uStack_34 = *in_FS_OFFSET;
          *in_FS_OFFSET = &uStack_34;
          local_38 = 0x565713;
          local_2c = &stack0xfffffffc;
          FUN_0043ff44(unaff_ESI,local_8);
          *in_FS_OFFSET = uStack_34;
          break;
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (uStack_20._3_1_ == '\0') {
      local_2c = (undefined1 *)0x0;
      local_30 = (undefined1 *)0xffffffff;
      uStack_34 = 0xffffffff;
      local_38 = 0;
      pwVar8 = L"Failed to locate extension data file: ";
      uVar7 = *(undefined4 *)(param_1 + 4);
      puVar6 = &DAT_00565898;
      FUN_00408480(&local_38,3);
      FUN_004d437c(local_38,1,0x10,puVar6,uVar7,pwVar8);
    }
    else {
      local_2c = (undefined1 *)0x5657b7;
      FUN_0052f298(param_2,unaff_ESI);
      local_2c = (undefined1 *)0x5657bf;
      FUN_00405a7c(unaff_ESI);
    }
  }
  puVar1 = uStack_20;
  *in_FS_OFFSET = local_28;
  uStack_20 = &LAB_005657ed;
  local_24 = (undefined1 *)0x5657dd;
  thunk_FUN_00406e80(&local_38,6,puVar1);
  local_24 = (undefined1 *)0x5657e5;
  thunk_FUN_00406e5c(&local_8);
  return;
}
