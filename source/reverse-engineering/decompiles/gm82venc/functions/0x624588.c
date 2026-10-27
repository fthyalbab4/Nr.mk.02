// rea decompile_all
// name: FUN_00624588
// address: 0x624588
// body: available
// range: 0x624588-0x6245f1 inclusive
// range: 0x62460e-0x62474e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6245a9 (push 0x62474f followed by fs-segment stack chaining); handler 0x62474f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6245da (push 0x6245f2 followed by fs-segment stack chaining); handler 0x6245f2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00624588(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined4 *puStack_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_9;
  undefined4 local_8;

  puStack_3c = (undefined1 *)0x62459e;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_40 = &LAB_0062474f;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_9 = 0;
  puStack_48 = (undefined4 *)0x6245b8;
  puStack_3c = &stack0xfffffffc;
  cVar2 = FUN_00416b0c(local_8);
  if (cVar2 != '\0') {
    puStack_48 = (undefined4 *)0x6245cc;
    local_10 = FUN_00405fac(&PTR_LAB_0050b4b8,1);
    puStack_4c = &LAB_006245f2;
    uStack_50 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_50;
    puStack_48 = (undefined4 *)&stack0xfffffffc;
    FUN_0043d544(local_10,local_8);
    puVar1 = puStack_48;
    *in_FS_OFFSET = uStack_50;
    puStack_48 = (undefined4 *)0x624616;
    iVar4 = FUN_0050bbe0(local_10,uStack_50,puVar1);
    if (iVar4 == 0x12d591) {
      puStack_48 = (undefined4 *)0x624629;
      uVar5 = FUN_0050be9c(local_10);
      puStack_48 = (undefined4 *)0x624632;
      FUN_00624edc(param_1);
      puStack_48 = (undefined4 *)0x624639;
      iVar4 = FUN_0050bbe0(uVar5);
      if (iVar4 == 800) {
        puStack_48 = (undefined4 *)0x62464b;
        uVar6 = FUN_0050bbe0(uVar5);
        *(undefined4 *)(param_1 + 0xc) = uVar6;
        puStack_48 = (undefined4 *)0x624655;
        uVar6 = FUN_0050bbe0(uVar5);
        *(undefined4 *)(param_1 + 0x10) = uVar6;
        puStack_48 = (undefined4 *)0x62465f;
        puStack_48 = (undefined4 *)FUN_0050bbe0(uVar5);
        *(undefined4 **)(param_1 + 4) = puStack_48;
        puStack_4c = (undefined1 *)0x624678;
        FUN_00409dfc(param_1 + 8,&DAT_00622864,1);
        if (-1 < *(int *)(param_1 + 4) + -1) {
          iVar4 = 0;
          local_1c = *(int *)(param_1 + 4);
          do {
            puStack_48 = (undefined4 *)0x624695;
            uVar6 = FUN_005159cc(&DAT_00514cd4,1);
            *(undefined4 *)(*(int *)(param_1 + 8) + iVar4 * 4) = uVar6;
            puStack_48 = (undefined4 *)0x6246a8;
            FUN_00516300(*(undefined4 *)(*(int *)(param_1 + 8) + iVar4 * 4),uVar5);
            puStack_48 = (undefined4 *)0x6246b3;
            FUN_0056e4f8(*(undefined4 *)(*(int *)(param_1 + 8) + iVar4 * 4));
            iVar4 = iVar4 + 1;
            local_1c = local_1c + -1;
          } while (local_1c != 0);
        }
        puStack_48 = (undefined4 *)0x6246c0;
        puVar7 = (undefined1 *)FUN_0050bbe0(uVar5);
        puStack_48 = (undefined4 *)0x6246c9;
        local_14 = FUN_0050bbe0(uVar5);
        puStack_48 = (undefined4 *)0x6246d3;
        uVar3 = FUN_0050bcd0(uVar5);
        *(undefined1 *)(param_1 + 0x28) = uVar3;
        puStack_48 = (undefined4 *)0x6246dd;
        local_18 = FUN_0050bbe0(uVar5);
        puStack_48 = (undefined4 *)0x6246e7;
        local_2c = FUN_0050bbe0(uVar5);
        puStack_48 = (undefined4 *)0x6246f1;
        local_24 = FUN_0050bbe0(uVar5);
        puStack_48 = (undefined4 *)0x6246fb;
        local_20 = FUN_0050bbe0(uVar5);
        puStack_48 = (undefined4 *)0x624705;
        local_28 = FUN_0050bbe0(uVar5);
        puStack_48 = (undefined4 *)0x62470f;
        FUN_00624a08(param_1);
        puStack_48 = &local_2c;
        uStack_50 = local_14;
        puStack_4c = puVar7;
        FUN_00623c28(param_1,*(undefined1 *)(param_1 + 0x28),local_18);
        puStack_48 = (undefined4 *)0x62472d;
        FUN_00405fdc(uVar5);
        puStack_48 = (undefined4 *)0x624735;
        FUN_00405fdc(local_10);
        local_9 = 1;
      }
    }
  }
  puVar7 = puStack_3c;
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_00624756;
  puStack_40 = (undefined1 *)0x62474e;
  thunk_FUN_004072d8(&local_8,uStack_44,puVar7);
  return;
}
