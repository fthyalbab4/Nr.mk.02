// rea decompile_all
// name: FUN_00575660
// address: 0x575660
// body: available
// range: 0x575660-0x57593a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x575683 (push 0x57593b followed by fs-segment stack chaining); handler 0x57593b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00575660(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar11;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined *local_2c;
  undefined *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int iVar12;
  undefined4 local_8;

  local_1c = &stack0xfffffffc;
  iVar8 = 6;
  do {
    local_8 = 0;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  local_20 = &LAB_0057593b;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = (undefined *)0x575690;
  FUN_00575588(param_1);
  local_28 = (undefined *)0x575698;
  iVar8 = FUN_0050bbe0(param_2);
  if ((699 < iVar8) && (iVar8 < 0x2bd)) {
    local_28 = (undefined *)0x5756b9;
    FUN_0050bc1c(param_2,&local_1c);
    local_28 = (undefined *)0x5756c7;
    FUN_00408194(param_1 + 4,local_1c);
    local_28 = (undefined *)0x5756d2;
    FUN_0050bc1c(param_2,&local_20);
    local_28 = (undefined *)0x5756e0;
    FUN_00408194(param_1 + 8,local_20);
    local_28 = (undefined *)0x5756e8;
    uVar4 = FUN_0050bbe0(param_2);
    local_28 = (undefined *)0x5756f2;
    FUN_005754c4(param_1,uVar4);
    iVar8 = *(int *)(param_1 + 0x10);
    if (-1 < iVar8 + -1) {
      iVar9 = 0;
      do {
        local_28 = (undefined *)0x575714;
        FUN_00574fd8(*(undefined4 *)(*(int *)(param_1 + 0xc) + iVar9 * 4),param_2);
        iVar9 = iVar9 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar8 = *(int *)(param_1 + 0x10);
    if (-1 < iVar8 + -1) {
      iVar9 = 0;
      do {
        iVar10 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + iVar9 * 4) + 0x18);
        if (-1 < iVar10 + -1) {
          iVar12 = 0;
          do {
            iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0xc) + iVar9 * 4) + 0x14) +
                            iVar12 * 4);
            local_28 = (undefined *)0x575765;
            FUN_00415c04(*(undefined4 *)(iVar1 + 4),&local_24);
            local_28 = (undefined *)0x575770;
            FUN_00408194(iVar1 + 4,local_24);
            local_28 = (undefined *)0x57577b;
            FUN_00415c04(*(undefined4 *)(iVar1 + 8),&local_28);
            puVar3 = local_28;
            local_28 = (undefined *)0x575786;
            FUN_00408194(iVar1 + 8,puVar3);
            if (*(int *)(iVar1 + 8) == 0) {
              local_28 = (undefined *)0x575797;
              FUN_00408194(iVar1 + 8,*(undefined4 *)(iVar1 + 4));
            }
            if (4 < *(int *)(iVar1 + 0x14)) {
              iVar5 = 0;
              do {
                *(undefined4 *)(iVar1 + 0x18 + iVar5 * 4) = 2;
                iVar5 = iVar5 + 1;
              } while (iVar5 != 0x11);
            }
            iVar12 = iVar12 + 1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
        iVar9 = iVar9 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    local_28 = (undefined *)0x5757c5;
    FUN_0050d110(&local_2c);
    local_28 = local_2c;
    local_2c = &DAT_00575958;
    local_30 = *(undefined1 **)(param_1 + 8);
    local_34 = 0x5757e0;
    FUN_0040875c(&local_8,3);
    local_34 = 0x5757e8;
    uVar6 = FUN_0050be14(param_2);
    local_34 = 0x5757f6;
    uVar4 = FUN_00405fac(&PTR_LAB_0050b4b8,1);
    local_34 = 0;
    uStack_38 = 0;
    FUN_0043caf8(uVar4,uVar6);
    FUN_0043c854(uVar4);
    FUN_00405fdc(uVar6);
    uVar7 = FUN_0050bbe0(uVar4);
    uVar11 = 0;
    iVar8 = FUN_0043c834(uVar4);
    FUN_0050c144(uVar4,uVar7,iVar8 + 1,uVar11);
    FUN_00416b78(local_8);
    iVar8 = *(int *)(param_1 + 0x10);
    if (-1 < iVar8 + -1) {
      iVar9 = 0;
      do {
        if (*(int *)(*(int *)(*(int *)(param_1 + 0xc) + iVar9 * 4) + 8) != 3) {
          uVar6 = FUN_0050be9c(uVar4);
        }
        iVar10 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + iVar9 * 4) + 8);
        if (iVar10 == 1) {
          uStack_38 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + iVar9 * 4) + 4);
          FUN_0040875c(&local_30,3);
          FUN_0043d470(uVar6,local_30);
        }
        else if (iVar10 == 4) {
          uStack_38 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + iVar9 * 4) + 4);
          FUN_0040875c(&local_34,3);
          FUN_0043d470(uVar6,local_34);
        }
        else if (iVar10 == 2) {
          FUN_00575204(*(undefined4 *)(*(int *)(param_1 + 0xc) + iVar9 * 4),uVar6);
        }
        if (*(int *)(*(int *)(*(int *)(param_1 + 0xc) + iVar9 * 4) + 8) != 3) {
          FUN_00405fdc(uVar6);
        }
        iVar9 = iVar9 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    FUN_00405fdc(uVar4);
  }
  puVar2 = local_30;
  *in_FS_OFFSET = uStack_38;
  local_30 = &LAB_00575942;
  local_34 = 0x575932;
  thunk_FUN_004072fc(&local_34,7,puVar2);
  local_34 = 0x57593a;
  thunk_FUN_004072d8(&local_8);
  return;
}
