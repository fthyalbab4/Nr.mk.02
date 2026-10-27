// rea decompile_all
// name: FUN_004b7514
// address: 0x4b7514
// body: available
// range: 0x4b7514-0x4b76e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4b7531 (push 0x4b76e1 followed by fs-segment stack chaining); handler 0x4b76e1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b7514(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  HWND pHVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  UINT UVar8;
  WPARAM WVar9;
  LPARAM LVar10;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined1 local_c;
  int local_8;

  puStack_2c = &stack0xfffffffc;
  local_1c = 0;
  puStack_30 = &LAB_004b76e1;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puVar1 = &stack0xfffffffc;
  if (param_2 != (undefined4 *)0x0) {
    iVar4 = FUN_004f3124(*(undefined4 *)(param_1 + 0x34));
    puVar1 = puStack_2c;
    if (-1 < iVar4 + -1) {
      iVar7 = 0;
      local_8 = iVar4;
      do {
        uVar5 = FUN_004f30e8(*(undefined4 *)(param_1 + 0x34),iVar7);
        cVar2 = FUN_00405c98(uVar5,&PTR_LAB_0049df24);
        if (cVar2 != '\0') {
          iVar4 = FUN_004f30e8(*(undefined4 *)(param_1 + 0x34),iVar7);
          if (param_1 != iVar4) {
            iVar4 = FUN_004f30e8(*(undefined4 *)(param_1 + 0x34),iVar7);
            if (param_2 == *(undefined4 **)(iVar4 + 0x274)) {
              local_18 = param_2[2];
              local_14 = 0x11;
              iVar4 = FUN_004f30e8(*(undefined4 *)(param_1 + 0x34),iVar7);
              local_10 = *(undefined4 *)(iVar4 + 8);
              local_c = 0x11;
              FUN_0041c0bc(&PTR_LAB_00410b4c,1,PTR_PTR_00782860,1,&local_18);
              FUN_00406618();
            }
          }
        }
        iVar7 = iVar7 + 1;
        local_8 = local_8 + -1;
        puVar1 = puStack_2c;
      } while (local_8 != 0);
    }
  }
  puStack_2c = puVar1;
  if (*(int *)(param_1 + 0x274) != 0) {
    cVar2 = FUN_004f7a54(param_1);
    if (cVar2 != '\0') {
      LVar10 = 0;
      WVar9 = 0;
      UVar8 = 0x469;
      pHVar6 = (HWND)FUN_004f76a8(param_1);
      SendMessageW(pHVar6,UVar8,WVar9,LVar10);
    }
    *(undefined4 *)(param_1 + 0x274) = 0;
  }
  if ((param_2 != (undefined4 *)0x0) && (param_2[0xd] == *(int *)(param_1 + 0x34))) {
    cVar2 = FUN_00405c98(param_2,&PTR_LAB_0049df24);
    if (cVar2 == '\0') {
      cVar2 = FUN_00405c98(param_2,&PTR_LAB_0049825c);
      if (cVar2 == '\0') {
        cVar2 = FUN_00405c98(param_2,&PTR_LAB_004a1dac);
        if (cVar2 == '\0') {
          bVar3 = FUN_004b74e4(*param_2,L"TDBEdit");
          bVar3 = bVar3 ^ 1;
          goto LAB_004b7654;
        }
      }
    }
  }
  bVar3 = 0;
LAB_004b7654:
  if (bVar3 != 0) {
    cVar2 = FUN_004b74e4(*param_2,L"TDBMemo");
    if (cVar2 == '\0') {
      cVar2 = FUN_004f7a54(param_1);
      if (cVar2 != '\0') {
        FUN_004b7728(param_1,param_2);
        LVar10 = 0;
        WVar9 = FUN_004f76a8(param_2);
        UVar8 = 0x469;
        pHVar6 = (HWND)FUN_004f76a8(param_1);
        SendMessageW(pHVar6,UVar8,WVar9,LVar10);
      }
      *(undefined4 **)(param_1 + 0x274) = param_2;
      cVar2 = FUN_00405c98(param_2,&PTR_LAB_00471ba0);
      if (cVar2 != '\0') {
        FUN_0041666c(*(undefined4 *)(param_1 + 0x28c),&local_1c);
        FUN_004ee6d8(param_2,local_1c);
      }
    }
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_004b76e8;
  puStack_30 = (undefined1 *)0x4b76e0;
  thunk_FUN_00406e5c(&local_1c,uStack_34,puVar1);
  return;
}
