// rea decompile_all
// name: FUN_006cd410
// address: 0x6cd410
// body: available
// range: 0x6cd410-0x6cd70c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6cd42b (push 0x6cd70d followed by fs-segment stack chaining); handler 0x6cd70d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006cd410(undefined4 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int extraout_EDX;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  puStack_2c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_30 = &LAB_006cd70d;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  uVar5 = 0;
  FUN_00409d1c(&local_8,param_1[1],&DAT_006cd3e4);
  do {
    uVar4 = (**(code **)*param_1)();
    if ((int)uVar5 >> 0x1f == extraout_EDX) {
      if (uVar4 <= uVar5) goto LAB_006cd6e4;
    }
    else if (extraout_EDX <= (int)uVar5 >> 0x1f) {
LAB_006cd6e4:
      puVar1 = puStack_2c;
      *in_FS_OFFSET = uStack_34;
      puStack_2c = &LAB_006cd714;
      puStack_30 = (undefined1 *)0x6cd6fe;
      thunk_FUN_00406e80(&local_1c,5,puVar1);
      puStack_30 = (undefined1 *)0x6cd70c;
      FUN_00409ce0(&local_8,&DAT_006cd3e4);
      return;
    }
    iVar2 = FUN_006cd180(param_1,L"VS_VERSION_INFO",uVar5);
    if (iVar2 < 0) goto LAB_006cd6e4;
    if (((((*(char *)(local_8 + 0x2a + iVar2) == 'c') && (*(char *)(local_8 + 0x2c + iVar2) == 'c'))
         && (*(char *)(local_8 + 0x2e + iVar2) == 'c')) &&
        ((*(char *)(local_8 + 0x30 + iVar2) == 'c' && (*(char *)(local_8 + 0x32 + iVar2) == 'c'))))
       && ((*(char *)(local_8 + 0x34 + iVar2) == 'c' &&
           ((*(char *)(local_8 + 0x36 + iVar2) == 'c' && (*(char *)(local_8 + 0x38 + iVar2) == 'c'))
           )))) {
      *(undefined *)(local_8 + 0x2a + iVar2) = *PTR_DAT_007819f0;
      *(undefined *)(local_8 + 0x2c + iVar2) = *PTR_DAT_0078263c;
      *(undefined *)(local_8 + 0x2e + iVar2) = *PTR_DAT_007815dc;
      *(undefined *)(local_8 + 0x30 + iVar2) = *PTR_DAT_00781bb4;
      *(undefined *)(local_8 + 0x32 + iVar2) = *PTR_DAT_007819f0;
      *(undefined *)(local_8 + 0x34 + iVar2) = *PTR_DAT_0078263c;
      *(undefined *)(local_8 + 0x36 + iVar2) = *PTR_DAT_007815dc;
      *(undefined *)(local_8 + 0x38 + iVar2) = *PTR_DAT_00781bb4;
      FUN_0041666c(*(int *)PTR_DAT_0078263c % 100,&local_10);
      FUN_0041666c(*(int *)PTR_DAT_007819f0 % 100,&local_14,100,&DAT_006cd754,local_10);
      FUN_0041666c(*(int *)PTR_DAT_00781bb4 % 100,&local_18,100,&DAT_006cd754,local_14);
      FUN_0041666c(*(int *)PTR_DAT_007815dc % 100,&local_1c,100,&DAT_006cd754,local_18);
      uVar7 = local_1c;
      FUN_00408480(&local_c,7);
      uVar6 = 0x6cd5e0;
      iVar3 = FUN_006cd180(param_1,L"XXXXXXXXXXCOMPANYXXXXXXXXXXXXXX",iVar2,uVar7);
      if (0 < iVar3) {
        uVar6 = 0x40;
        FUN_006cd2e4(param_1,iVar3,*(undefined4 *)PTR_DAT_00781788,0x40);
      }
      iVar3 = FUN_006cd180(param_1,L"XXXXXXXXXXDESCRIPXXXXXXXXXXXXXX",iVar2,uVar6);
      if (0 < iVar3) {
        FUN_006cd2e4(param_1,iVar3,*(undefined4 *)PTR_DAT_0078291c,0x40);
      }
      iVar3 = FUN_006cd180(param_1,L"XXXXXXXXXXCOPYRIGXXXXXXXXXXXXXX",iVar2,uVar6);
      if (0 < iVar3) {
        FUN_006cd2e4(param_1,iVar3,*(undefined4 *)PTR_DAT_007816e4,0x40);
      }
      iVar3 = FUN_006cd180(param_1,L"XXXXXXXXXXPRODUCTXXXXXXXXXXXXXX",iVar2);
      if (0 < iVar3) {
        FUN_006cd2e4(param_1,iVar3,*(undefined4 *)PTR_DAT_00782888,0x40);
      }
      iVar2 = FUN_006cd180(param_1,L"99.99.99.99",iVar2);
      if (0 < iVar2) {
        FUN_006cd2e4(param_1,iVar2,local_c,0xb);
      }
      iVar2 = FUN_006cd180(param_1,L"99.99.99.99",iVar2 + 10);
      if (0 < iVar2) {
        FUN_006cd2e4(param_1,iVar2,local_c,0xb);
      }
      uVar5 = (**(code **)*param_1)();
    }
    else {
      uVar5 = iVar2 + 1;
    }
  } while( true );
}
