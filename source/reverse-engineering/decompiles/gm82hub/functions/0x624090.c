// rea decompile_all
// name: FUN_00624090
// address: 0x624090
// body: available
// range: 0x624090-0x6240e9 inclusive
// range: 0x624108-0x62430f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6240b5 (push 0x624310 followed by fs-segment stack chaining); handler 0x624310 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6240d2 (push 0x6240ea followed by fs-segment stack chaining); handler 0x6240ea lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00624090(int param_1,undefined4 param_2,char param_3,char param_4)

{
  char cVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined1 local_30 [16];
  int local_20;
  undefined1 *local_1c;
  int local_18;
  int *local_14;
  char local_d;
  int local_c;
  undefined4 local_8;

  puStack_40 = (undefined1 *)0x6240aa;
  local_d = param_3;
  local_c = param_1;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_44 = &LAB_00624310;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  puStack_4c = (undefined1 *)0x6240c4;
  puStack_40 = &stack0xfffffffc;
  local_14 = (int *)FUN_0052ea1c(&PTR_LAB_0051dddc,1);
  puStack_50 = &LAB_006240ea;
  puStack_54 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_54;
  puStack_4c = &stack0xfffffffc;
  (**(code **)(*local_14 + 0x54))(local_14,local_8);
  puVar3 = puStack_4c;
  *in_FS_OFFSET = puStack_54;
  puStack_4c = (undefined1 *)0x624110;
  FUN_00624edc(local_c,puStack_54,puVar3);
  puStack_4c = (undefined1 *)0x624128;
  FUN_0052ed24(local_14,CONCAT22(0xffff,*(ushort *)(local_14 + 0xf) & 63999));
  puStack_4c = (undefined1 *)0x624130;
  local_18 = (**(code **)(*local_14 + 0x30))();
  puStack_4c = (undefined1 *)0x62413b;
  local_1c = (undefined1 *)(**(code **)(*local_14 + 0x24))();
  puStack_4c = (undefined1 *)0x624149;
  puStack_4c = (undefined1 *)FUN_00524d94(local_14[0xb]);
  *(undefined1 **)(local_c + 4) = puStack_4c;
  puStack_50 = (undefined1 *)0x624168;
  FUN_00409dfc(local_c + 8,&DAT_00622864,1);
  puStack_4c = (undefined1 *)0x624177;
  piVar2 = (int *)FUN_00462804(&PTR_FUN_00458e94,1);
  puStack_4c = (undefined1 *)0x624182;
  FUN_00464480(piVar2,6);
  puStack_4c = (undefined1 *)0x62418b;
  FUN_00464480(piVar2,7);
  iVar4 = local_18;
  if (local_18 < 1) {
    iVar4 = 1;
  }
  puStack_4c = (undefined1 *)0x6241a4;
  (**(code **)(*piVar2 + 0x44))(piVar2,iVar4);
  puVar3 = local_1c;
  if ((int)local_1c < 1) {
    puVar3 = (undefined1 *)0x1;
  }
  puStack_4c = (undefined1 *)0x6241bd;
  (**(code **)(*piVar2 + 0x38))(piVar2,puVar3);
  puStack_4c = (undefined1 *)0x6241c4;
  iVar4 = FUN_00463124(piVar2);
  puStack_4c = (undefined1 *)0x6241d1;
  FUN_0045c2e4(*(undefined4 *)(iVar4 + 0x48),0x8040);
  puStack_4c = (undefined1 *)0x6241d8;
  piVar5 = (int *)FUN_00463124(piVar2);
  puStack_4c = (undefined1 *)0x6241e0;
  (**(code **)(*piVar5 + 0x10))(piVar5,local_30);
  puStack_4c = local_30;
  puStack_50 = (undefined1 *)0x6241eb;
  piVar5 = (int *)FUN_00463124(piVar2);
  puVar3 = puStack_4c;
  puStack_4c = (undefined1 *)0x6241f1;
  (**(code **)(*piVar5 + 0x4c))(piVar5,puVar3);
  if (-1 < *(int *)(local_c + 4) + -1) {
    iVar4 = 0;
    local_20 = *(int *)(local_c + 4);
    do {
      puStack_4c = (undefined1 *)0x624213;
      iVar6 = FUN_0052c584(local_14[0xb],iVar4);
      puStack_4c = (undefined1 *)(uint)*(byte *)(iVar6 + 0x34);
      puStack_50 = (undefined1 *)0x0;
      puStack_54 = local_1c;
      FUN_00436ad0(0,0,local_18,local_30);
      puStack_54 = local_30;
      uVar7 = FUN_0052c584(local_14[0xb],iVar4);
      uVar8 = FUN_00463124(piVar2);
      puVar3 = puStack_54;
      puStack_54 = (undefined1 *)0x624250;
      FUN_0052a584(uVar7,uVar8,puVar3);
      puStack_4c = (undefined1 *)0x62425e;
      uVar7 = FUN_00515b64(&DAT_00514cd4,1,piVar2);
      *(undefined4 *)(*(int *)(local_c + 8) + iVar4 * 4) = uVar7;
      if (local_d != '\0') {
        puStack_4c = (undefined1 *)0x624278;
        FUN_0056e3b8(uVar7,0);
      }
      if (param_4 != '\0') {
        puStack_4c = (undefined1 *)0x62428c;
        FUN_0056e3dc(*(undefined4 *)(*(int *)(local_c + 8) + iVar4 * 4));
      }
      if (local_d != '\0') {
        puStack_4c = (undefined1 *)0x6242a0;
        FUN_0056e4f8(*(undefined4 *)(*(int *)(local_c + 8) + iVar4 * 4));
      }
      puStack_4c = (undefined1 *)0x6242ad;
      iVar6 = FUN_0052c584(local_14[0xb],iVar4);
      if (*(int *)(iVar6 + 0x38) == 0) {
LAB_006242bf:
        puStack_4c = (undefined1 *)0x6242c6;
        piVar5 = (int *)FUN_00463124(piVar2);
        puStack_4c = (undefined1 *)0x6242ce;
        (**(code **)(*piVar5 + 0x10))(piVar5,local_30);
        puStack_4c = local_30;
        puStack_50 = (undefined1 *)0x6242d9;
        piVar5 = (int *)FUN_00463124(piVar2);
        puVar3 = puStack_4c;
        puStack_4c = (undefined1 *)0x6242df;
        (**(code **)(*piVar5 + 0x4c))(piVar5,puVar3);
      }
      else {
        puStack_4c = (undefined1 *)0x6242bb;
        cVar1 = FUN_0052b710(*(int *)(iVar6 + 0x38));
        if (cVar1 != '\x01') goto LAB_006242bf;
      }
      iVar4 = iVar4 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  puStack_4c = (undefined1 *)0x6242f0;
  FUN_00405fdc(piVar2);
  puStack_4c = (undefined1 *)0x6242f8;
  FUN_00405fdc(local_14);
  puVar3 = puStack_40;
  *in_FS_OFFSET = uStack_48;
  puStack_40 = &LAB_00624317;
  puStack_44 = (undefined1 *)0x62430f;
  thunk_FUN_004072d8(&local_8,uStack_48,puVar3);
  return;
}
