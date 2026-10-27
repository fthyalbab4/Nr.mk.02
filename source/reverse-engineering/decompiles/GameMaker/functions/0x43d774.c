// rea decompile_all
// name: FUN_0043d774
// address: 0x43d774
// body: available
// range: 0x43d774-0x43d994 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43d7a7 (push 0x43d995 followed by fs-segment stack chaining); handler 0x43d995 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043d774(int *param_1,int *param_2)

{
  WCHAR WVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  LPCWSTR lpsz;
  int iVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *in_FS_OFFSET;
  bool bVar11;
  byte bVar12;
  undefined4 uStackY_a4;
  undefined1 *puStackY_a0;
  undefined1 *puVar13;
  undefined4 local_88;
  undefined4 local_84;
  byte local_80 [32];
  undefined4 local_60 [8];
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  byte local_34 [32];
  int local_14;
  int local_10;
  int *local_c;
  undefined1 *local_8;

  bVar12 = 0;
  puVar13 = &stack0xfffffffc;
  local_88 = 0;
  local_84 = 0;
  local_3c = 0;
  local_40 = 0;
  local_38 = 0;
  local_8 = (undefined1 *)0x0;
  puStackY_a0 = &LAB_0043d995;
  uStackY_a4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_a4;
  local_c = param_2;
  iVar3 = (**(code **)(*param_1 + 0x14))();
  if ((iVar3 == 1) && ((**(code **)(*param_1 + 0xc))(param_1,0,&local_38), local_38 == 0)) {
    uVar4 = FUN_0043e8dc(param_1);
    FUN_00408034(&local_3c,uVar4);
    uVar4 = local_3c;
    uVar5 = FUN_0043e8dc(param_1);
    FUN_00408034(&local_40,uVar5);
    FUN_0040839c(local_c,local_40,uVar4);
  }
  else {
    FUN_00407eb8(local_c,0);
    puVar9 = &DAT_0043d9a4;
    puVar10 = local_60;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
      puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
    }
    uVar4 = FUN_0043e8dc(param_1);
    FUN_00405588(local_80,uVar4,0x20);
    uVar6 = FUN_0043e884(param_1);
    local_80[(int)(uVar6 & 0xff) >> 3] = local_80[(int)(uVar6 & 0xff) >> 3] | '\x01' << (uVar6 & 7);
    FUN_00405638(local_60,local_80,0x20);
    puVar9 = local_60;
    pbVar8 = local_34;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pbVar8 = *puVar9;
      puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
      pbVar8 = pbVar8 + ((uint)bVar12 * -2 + 1) * 4;
    }
    cVar2 = FUN_0043e8f8(param_1);
    if (cVar2 == '\0') {
      pbVar8 = local_34;
      puVar9 = local_60;
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar9 = *(undefined4 *)pbVar8;
        pbVar8 = pbVar8 + ((uint)bVar12 * -2 + 1) * 4;
        puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
      }
      FUN_00405638(local_60,&DAT_0043d9c4,0x20);
      puVar9 = local_60;
      pbVar8 = local_34;
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined4 *)pbVar8 = *puVar9;
        puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
        pbVar8 = pbVar8 + ((uint)bVar12 * -2 + 1) * 4;
      }
    }
    if (-1 < iVar3 + -1) {
      local_10 = 0;
      local_14 = iVar3;
      do {
        (**(code **)(*param_1 + 0xc))(param_1,local_10,&local_8);
        lpsz = (LPCWSTR)FUN_00407f44(local_8);
        while( true ) {
          WVar1 = *lpsz;
          bVar11 = (ushort)WVar1 < 0xff;
          if ((ushort)WVar1 < 0x100) {
            bVar11 = (local_34[(int)(uint)(ushort)WVar1 >> 3] >> ((ushort)WVar1 & 7) & 1) != 0;
          }
          if (bVar11) break;
          puStackY_a0 = (undefined1 *)0x43d8c6;
          lpsz = CharNextW(lpsz);
        }
        if (*lpsz != L'\0') {
          uVar4 = FUN_0043e8dc(param_1);
          FUN_00415fc4(local_8,uVar4,&local_84);
          FUN_00407f0c(&local_8,local_84);
        }
        puVar13 = (undefined1 *)*local_c;
        puStackY_a0 = local_8;
        uStackY_a4 = 0x43d90e;
        uVar4 = FUN_0043e884(param_1);
        uStackY_a4 = 0x43d91b;
        FUN_00408034(&local_88,uVar4);
        uStackY_a4 = local_88;
        FUN_00408480(local_c,3);
        local_10 = local_10 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
    uVar4 = 0;
    if (*local_c != 0) {
      uVar4 = *(undefined4 *)(*local_c + -4);
    }
    FUN_00408778(local_c,uVar4,1);
  }
  *in_FS_OFFSET = uStackY_a4;
  puStackY_a0 = (undefined1 *)0x43d97f;
  thunk_FUN_00406e80(&local_88,2,puVar13);
  puStackY_a0 = (undefined1 *)0x43d98c;
  thunk_FUN_00406e80(&local_40,3);
  puStackY_a0 = (undefined1 *)0x43d994;
  thunk_FUN_00406e5c(&local_8);
  return;
}
