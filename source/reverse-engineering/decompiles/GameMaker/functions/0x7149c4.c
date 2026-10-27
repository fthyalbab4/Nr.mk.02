// rea decompile_all
// name: FUN_007149c4
// address: 0x7149c4
// body: available
// range: 0x7149c4-0x714c5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x7149e1 (push 0x714c5c followed by fs-segment stack chaining); handler 0x714c5c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_007149c4(void)

{
  bool bVar1;
  undefined1 *puVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *in_FS_OFFSET;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int *local_c;
  int local_8;

  local_1c = &stack0xfffffffc;
  iVar7 = 8;
  do {
    local_8 = 0;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  local_20 = &LAB_00714c5c;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = (undefined4 *)0x7149f0;
  piVar4 = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
  local_28 = (undefined4 *)0x714a02;
  FUN_00520290(*(undefined4 *)PTR_DAT_00782280,&local_20);
  local_28 = (undefined4 *)0x714a0d;
  FUN_0041735c(local_20,&local_1c);
  local_28 = (undefined4 *)0x714a1a;
  FUN_004082dc(&local_1c,L"lib\\");
  local_28 = (undefined4 *)0x714a25;
  (**(code **)(*piVar4 + 0x38))(piVar4,local_1c);
  local_28 = (undefined4 *)0x714a34;
  FUN_00520290(*(undefined4 *)PTR_DAT_00782280,&local_28);
  puVar8 = local_28;
  local_28 = (undefined4 *)0x714a3f;
  FUN_0041735c(puVar8,&local_24);
  local_28 = (undefined4 *)0x714a4c;
  FUN_004082dc(&local_24,L"extensions\\");
  local_28 = (undefined4 *)0x714a57;
  (**(code **)(*piVar4 + 0x38))(piVar4,local_24);
  local_28 = (undefined4 *)0x714a64;
  (**(code **)(*piVar4 + 0xc))(piVar4,0,&local_2c);
  local_28 = (undefined4 *)0x714a6c;
  cVar3 = FUN_00526f48(local_2c);
  if (cVar3 == '\0') {
    local_28 = (undefined4 *)0x714a7a;
    FUN_004d43f8(L"Cannot locate action library directory.");
  }
  else {
    local_28 = (undefined4 *)0x714a8f;
    (**(code **)(*piVar4 + 0xc))(piVar4,1,&local_30);
    local_28 = (undefined4 *)0x714a97;
    cVar3 = FUN_00526f48(local_30);
    if (cVar3 == '\0') {
      local_28 = (undefined4 *)0x714aa5;
      FUN_004d43f8(L"Cannot locate action extension directory.");
    }
    else {
      local_28 = (undefined4 *)0x714ab6;
      cVar3 = FUN_00526f48(*(undefined4 *)PTR_DAT_00782744);
      if (cVar3 != '\0') {
        local_28 = (undefined4 *)0x714aca;
        (**(code **)(*piVar4 + 0x38))(piVar4,*(undefined4 *)PTR_DAT_00782744);
      }
      local_28 = (undefined4 *)0x714ad6;
      cVar3 = FUN_00526f48(*(undefined4 *)PTR_DAT_00781f90);
      if (cVar3 != '\0') {
        local_28 = (undefined4 *)0x714aea;
        (**(code **)(*piVar4 + 0x38))(piVar4,*(undefined4 *)PTR_DAT_00781f90);
      }
      local_28 = (undefined4 *)0x714af6;
      local_c = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
      local_28 = (undefined4 *)0x714b01;
      FUN_007138b8(&local_c);
      local_28 = (undefined4 *)0x714b0c;
      (**(code **)(*local_c + 0xa0))();
      if (DAT_0077f5e0 <= DAT_0077f5dc + -1) {
        iVar7 = ((DAT_0077f5dc + -1) - DAT_0077f5e0) + 1;
        local_8 = DAT_0077f5e0;
        puVar8 = &DAT_0079a660 + DAT_0077f5e0;
        do {
          local_28 = (undefined4 *)0x714b34;
          FUN_00405a7c(*puVar8);
          puVar8 = puVar8 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      DAT_0077f5dc = DAT_0077f5e0;
      local_28 = (undefined4 *)0x714b4e;
      iVar7 = (**(code **)(*local_c + 0x14))();
      if (-1 < iVar7 + -1) {
        local_8 = 0;
        do {
          local_28 = (undefined4 *)0x714b6e;
          uVar5 = FUN_00562764(&DAT_00562250,1);
          (&DAT_0079a660)[DAT_0077f5dc] = uVar5;
          bVar1 = false;
          local_28 = (undefined4 *)0x714b87;
          iVar6 = (**(code **)(*piVar4 + 0x14))();
          if (-1 < iVar6 + -1) {
            iVar9 = 0;
            do {
              local_28 = (undefined4 *)0x714b9e;
              (**(code **)(*piVar4 + 0xc))(piVar4,iVar9,&local_34);
              local_28 = &local_34;
              local_2c = 0x714bb0;
              (**(code **)(*local_c + 0xc))(local_c,local_8,&local_38);
              puVar8 = local_28;
              local_28 = (undefined4 *)0x714bb9;
              FUN_004082dc(puVar8,local_38);
              local_28 = (undefined4 *)0x714bcd;
              cVar3 = FUN_005629fc((&DAT_0079a660)[DAT_0077f5dc],local_34);
              if (cVar3 != '\0') {
                bVar1 = true;
              }
              iVar9 = iVar9 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          if (bVar1) {
            DAT_0077f5dc = DAT_0077f5dc + 1;
            if (99 < DAT_0077f5dc) {
              local_28 = (undefined4 *)0x714c2b;
              FUN_004d43f8(L"Not all action libraries could be loaded.");
              break;
            }
          }
          else {
            local_28 = (undefined4 *)0x714bed;
            (**(code **)(*local_c + 0xc))(local_c,local_8,&local_44);
            local_28 = (undefined4 *)0x714bf8;
            FUN_00417398(local_44,&local_40);
            local_28 = (undefined4 *)0x714c08;
            FUN_0040839c(&local_3c,L"Error loading action library: ",local_40);
            local_28 = (undefined4 *)0x714c10;
            FUN_004d43f8(local_3c);
          }
          local_8 = local_8 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      local_28 = (undefined4 *)0x714c41;
      FUN_00405a7c(local_c);
    }
  }
  puVar2 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_00714c63;
  local_20 = (undefined1 *)0x714c5b;
  thunk_FUN_00406e80(&local_44,0xb,puVar2);
  return;
}
