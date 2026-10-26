// rea decompile_all
// name: FUN_0063aecc
// address: 0x63aecc
// body: available
// range: 0x63aecc-0x63b1e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x63aef1 (push 0x63b1e2 followed by fs-segment stack chaining); handler 0x63b1e2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063aecc(int param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar9;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;

  puStack_38 = &stack0xfffffffc;
  local_24 = 0;
  local_28 = 0;
  local_20 = 0;
  puStack_3c = &LAB_0063b1e2;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (DAT_0077f0e8 == (int *)0x0) {
    DAT_0077f0e8 = (int *)FUN_0063a6f4(&PTR_FUN_0063997c,1,0);
    (**(code **)(*(int *)DAT_0077f0e8[0x41] + 0xf0))((int *)DAT_0077f0e8[0x41],1);
    FUN_00407eb8(DAT_0077f0e8 + 0x20,L"Open a Sprite Image");
    puVar1 = puStack_38;
  }
  puStack_38 = puVar1;
  FUN_005b33a8(DAT_0077f0e8[0x35],local_8);
  if ((*local_c != 0) && (cVar2 = FUN_00416e88(*local_c), cVar2 != '\0')) {
    FUN_004cf3e4(DAT_0077f0e8,*local_c);
  }
  cVar2 = (**(code **)(*DAT_0077f0e8 + 0x40))();
  if (cVar2 != '\0') {
    piVar3 = (int *)FUN_004cf298(DAT_0077f0e8);
    iVar4 = (**(code **)(*piVar3 + 0x14))();
    if (iVar4 != 0) {
      FUN_005b32a4(local_8);
      local_18 = FUN_005b325c(&DAT_005b27dc,1);
      piVar3 = (int *)FUN_004cf298(DAT_0077f0e8);
      iVar4 = (**(code **)(*piVar3 + 0x14))();
      if (-1 < iVar4 + -1) {
        local_10 = 0;
        local_1c = iVar4;
        do {
          piVar3 = (int *)FUN_004cf298(DAT_0077f0e8);
          (**(code **)(*piVar3 + 0xc))(piVar3,local_10,&local_20);
          cVar2 = FUN_005b3c40(local_18,local_20);
          if ((cVar2 != '\0') && (*(int *)(local_18 + 4) != 0)) {
            iVar4 = FUN_005b2ec4(local_18);
            local_14 = FUN_005b2edc(local_18);
            if (0 < *(int *)(local_8 + 4)) {
              iVar5 = FUN_005b2ec4(local_8);
              iVar4 = FUN_005b2ec4(local_18);
              if (iVar4 < iVar5) {
                iVar4 = iVar5;
              }
            }
            if (0 < *(int *)(local_8 + 4)) {
              iVar5 = FUN_005b2edc(local_8);
              local_14 = FUN_005b2edc(local_18);
              if (local_14 < iVar5) {
                local_14 = iVar5;
              }
            }
            iVar5 = *(int *)(local_8 + 4);
            if (-1 < iVar5 + -1) {
              iVar8 = 0;
              do {
                uVar9 = 7;
                uVar7 = *(undefined4 *)PTR_DAT_007819d0;
                uVar6 = FUN_005b2ef4(local_8,iVar8);
                FUN_00701e94(uVar6,iVar4,local_14,uVar7,uVar9);
                iVar8 = iVar8 + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
            iVar5 = *(int *)(local_18 + 4);
            if (-1 < iVar5 + -1) {
              iVar8 = 0;
              do {
                uVar9 = 7;
                uVar7 = *(undefined4 *)PTR_DAT_007819d0;
                uVar6 = FUN_005b2ef4(local_18,iVar8);
                FUN_00701e94(uVar6,iVar4,local_14,uVar7,uVar9);
                iVar8 = iVar8 + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
            iVar4 = *(int *)(local_18 + 4);
            if (-1 < iVar4 + -1) {
              iVar5 = 0;
              do {
                uVar7 = FUN_005b2ef4(local_18,iVar5);
                FUN_005b3354(local_8,uVar7);
                iVar5 = iVar5 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
          }
          local_10 = local_10 + 1;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
      FUN_00405a7c(local_18);
      if (-1 < *(int *)(local_8 + 4) + -1) {
        local_10 = 0;
        local_1c = *(int *)(local_8 + 4);
        do {
          cVar2 = (**(code **)(*(int *)DAT_0077f0e8[0x43] + 0xec))();
          if (cVar2 != '\0') {
            FUN_005b2ef4(local_8,local_10);
            FUN_005b08d0();
          }
          cVar2 = (**(code **)(*(int *)DAT_0077f0e8[0x41] + 0xec))();
          if (cVar2 != '\0') {
            uVar7 = FUN_005b2ef4(local_8,local_10);
            FUN_005b0b70(uVar7,0);
          }
          cVar2 = (**(code **)(*(int *)DAT_0077f0e8[0x42] + 0xec))();
          if (cVar2 != '\0') {
            FUN_005b2ef4(local_8,local_10);
            FUN_005b0b94();
          }
          local_10 = local_10 + 1;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
      FUN_004cf2f4(DAT_0077f0e8,&local_28);
      FUN_0041735c(local_28,&local_24);
      FUN_00407eb8(local_c,local_24);
    }
  }
  puVar1 = puStack_38;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_0063b1e9;
  puStack_3c = (undefined1 *)0x63b1d4;
  thunk_FUN_00406e5c(&local_28,uStack_40,puVar1);
  puStack_3c = (undefined1 *)0x63b1e1;
  thunk_FUN_00406e80(&local_24,2);
  return;
}
