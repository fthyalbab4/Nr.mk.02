// rea decompile_all
// name: FUN_005e0b6c
// address: 0x5e0b6c
// body: available
// range: 0x5e0b6c-0x5e0fb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5e0b99 (push 0x5e0fb4 followed by fs-segment stack chaining); handler 0x5e0fb4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005e0dce) */
/* WARNING: Removing unreachable block (ram,0x005e0db5) */
/* WARNING: Removing unreachable block (ram,0x005e0f06) */
/* WARNING: Removing unreachable block (ram,0x005e0eed) */
/* WARNING: Removing unreachable block (ram,0x005e0f86) */
/* WARNING: Removing unreachable block (ram,0x005e0f6d) */
/* WARNING: Removing unreachable block (ram,0x005e0f54) */
/* WARNING: Removing unreachable block (ram,0x005e0f3b) */
/* WARNING: Removing unreachable block (ram,0x005e0ed4) */
/* WARNING: Removing unreachable block (ram,0x005e0ebb) */
/* WARNING: Removing unreachable block (ram,0x005e0d9c) */
/* WARNING: Removing unreachable block (ram,0x005e0d83) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005e0b6c(undefined4 param_1,undefined1 *param_2)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  undefined1 *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int extraout_ECX;
  int extraout_EDX;
  int extraout_EDX_00;
  uint uVar9;
  uint extraout_EDX_01;
  int extraout_EDX_02;
  uint extraout_EDX_03;
  int iVar10;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  int local_50;
  int local_38;
  int local_30;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;

  puStack_74 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_78 = &LAB_005e0fb4;
  uStack_7c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_7c;
  *param_2 = 1;
  uVar11 = 1;
  iVar10 = 4;
  FUN_00407f0c(&local_c,param_1);
  while( true ) {
    FUN_00407f0c(&local_10,&DAT_005e0fd0);
    FUN_00408640(local_10,&DAT_005e0fe0);
    if ((bool)uVar11) {
      iVar6 = FUN_00408a68(local_10,local_c);
    }
    else {
      iVar6 = (*ram0x0077d7fc)(local_10,local_c);
    }
    if (iVar6 == 0) {
      FUN_00407f0c(&local_14,local_c);
      FUN_00407f0c(&local_c,0);
    }
    else {
      puVar13 = &local_14;
      iVar7 = iVar6 + -1;
      if (SBORROW4(iVar6,1)) {
        FUN_00405944();
        iVar7 = extraout_ECX;
      }
      FUN_004086a8(local_c,1,iVar7,puVar13);
      piVar12 = &local_c;
      FUN_00407058(&local_10);
      iVar8 = FUN_00408238();
      iVar7 = iVar8 + iVar6;
      if (SCARRY4(iVar8,iVar6)) {
        FUN_00405944(iVar8,iVar7);
        iVar7 = extraout_EDX;
      }
      FUN_004086a8(local_c,iVar7,0x7fffffff,piVar12);
    }
    FUN_00407f0c(&local_8,local_14);
    if (local_8 == 0) break;
    cVar5 = FUN_005e3958(local_8,&DAT_005e0ff0);
    if (cVar5 == '\0') {
      cVar5 = FUN_005e0a8c(local_8);
      if (cVar5 == '\0') goto LAB_005e0f99;
      cVar5 = FUN_005e3958(local_8,&DAT_005e1004);
      if (cVar5 == '\0') {
        bVar3 = false;
      }
      else {
        FUN_00407f0c(&local_1c,local_8);
        bVar3 = false;
        iVar6 = FUN_005e1988(local_1c,0xffffffff,1);
        if (0 < iVar6) {
          local_50 = iVar6 + -1;
          if (SBORROW4(iVar6,1)) {
            local_50 = FUN_00405944();
          }
          if (-1 < local_50) {
            local_50 = local_50 + 1;
            iVar6 = 0;
            do {
              iVar8 = FUN_00407058(&local_1c);
              iVar7 = iVar6 + 1;
              if (SCARRY4(iVar6,1)) {
                iVar8 = FUN_00405944();
                iVar7 = extraout_EDX_02;
              }
              uVar9 = iVar7 - 1;
              if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                iVar8 = thunk_FUN_00404478();
                uVar9 = extraout_EDX_03;
              }
              uVar1 = *(ushort *)(iVar8 + -2 + (uVar9 + 1) * 2);
              if ((uVar1 < 0x30) || (0x37 < uVar1)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (!bVar2) goto LAB_005e0e8f;
              iVar6 = iVar6 + 1;
              local_50 = local_50 + -1;
            } while (local_50 != 0);
          }
          bVar3 = true;
        }
      }
LAB_005e0e8f:
      if (bVar3) {
        FUN_005e0570(local_8);
      }
      else {
        FUN_00416974(local_8);
      }
    }
    else {
      FUN_004086a8(local_8,3,0x7fffffff,&local_18);
      bVar3 = false;
      iVar6 = FUN_005e1988(local_18,0xffffffff,1);
      if (0 < iVar6) {
        local_38 = iVar6 + -1;
        if (SBORROW4(iVar6,1)) {
          local_38 = FUN_00405944();
        }
        if (-1 < local_38) {
          local_38 = local_38 + 1;
          local_30 = 0;
          do {
            iVar7 = FUN_00407058(&local_18);
            iVar6 = local_30 + 1;
            if (SCARRY4(local_30,1)) {
              iVar7 = FUN_00405944();
              iVar6 = extraout_EDX_00;
            }
            uVar9 = iVar6 - 1;
            if ((iVar7 == 0) || (*(uint *)(iVar7 + -4) <= uVar9)) {
              iVar7 = thunk_FUN_00404478();
              uVar9 = extraout_EDX_01;
            }
            uVar1 = *(ushort *)(iVar7 + -2 + (uVar9 + 1) * 2);
            cVar5 = FUN_005e0b58(uVar1);
            if (((cVar5 == '\0') && ((uVar1 < 0x41 || (0x46 < uVar1)))) &&
               ((uVar1 < 0x61 || (0x66 < uVar1)))) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) goto LAB_005e0d4d;
            local_30 = local_30 + 1;
            local_38 = local_38 + -1;
          } while (local_38 != 0);
        }
        bVar3 = true;
      }
LAB_005e0d4d:
      if (!bVar3) goto LAB_005e0f99;
      FUN_00416974(local_8);
    }
    iVar10 = iVar10 + -1;
    uVar11 = iVar10 == 0;
  }
  *param_2 = 0;
LAB_005e0f99:
  puVar4 = puStack_74;
  *in_FS_OFFSET = uStack_7c;
  puStack_74 = &LAB_005e0fbb;
  puStack_78 = (undefined1 *)0x5e0fb3;
  thunk_FUN_00406e80(&local_1c,6,puVar4);
  return;
}
