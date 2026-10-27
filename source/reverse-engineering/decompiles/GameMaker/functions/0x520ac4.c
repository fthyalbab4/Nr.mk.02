// rea decompile_all
// name: FUN_00520ac4
// address: 0x520ac4
// body: available
// range: 0x520ac4-0x520bd8 inclusive
// range: 0x520c0f-0x520c18 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x520afd (push 0x520c08 followed by fs-segment stack chaining); handler 0x520c08 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x520b27 (push 0x520bd9 followed by fs-segment stack chaining); handler 0x520bd9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00520ac4(void)

{
  undefined1 *puVar1;
  char cVar2;
  HCURSOR hIcon;
  BOOL BVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  ICONINFO *piconinfo;
  ICONINFO local_2c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_8 = (**(code **)PTR_DAT_00781c5c)();
  piconinfo = &local_2c;
  hIcon = GetCursor();
  uStack_48 = 0x520aea;
  BVar3 = GetIconInfo(hIcon,piconinfo);
  if (BVar3 != 0) {
    uStack_48 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_48;
    puStack_4c = (undefined1 *)0x520b0e;
    FUN_0045e0dc(local_2c.hbmMask,&local_c,&local_10);
    puStack_4c = (undefined1 *)0x520b19;
    iVar4 = FUN_00404304(local_c + local_10);
    puStack_50 = &LAB_00520bd9;
    uStack_54 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_54;
    iVar6 = iVar4 + local_c;
    puStack_4c = &stack0xfffffffc;
    local_14 = iVar4;
    cVar2 = FUN_0045e198(local_2c.hbmMask,0,iVar4,iVar6);
    if ((cVar2 != '\0') && (*(short *)(local_14 + 0xe) == 1)) {
      uVar5 = *(int *)(iVar4 + 4) * (uint)*(ushort *)(iVar4 + 0xe) + 0x1f & 0xffffffe0;
      if ((int)uVar5 < 0) {
        uVar5 = uVar5 + 7;
      }
      local_18 = (int)uVar5 >> 3;
      iVar7 = *(int *)(iVar4 + 4) * local_18;
      iVar6 = (iVar6 + local_10) - iVar7;
      local_8 = FUN_00520ab4(iVar6,iVar7,0xff);
      if ((local_8 == 0) && (*(int *)(iVar4 + 4) * 2 <= *(int *)(iVar4 + 8))) {
        local_8 = FUN_00520ab4(iVar6 - iVar7,iVar7,0);
      }
      local_8 = local_8 / local_18 - local_2c.yHotspot;
    }
    puVar1 = puStack_4c;
    *in_FS_OFFSET = uStack_54;
    puStack_4c = &LAB_00520be0;
    puStack_50 = (undefined1 *)0x520bd8;
    iVar4 = FUN_00404338(local_14,local_c + local_10,puVar1);
    return iVar4;
  }
  return local_8;
}
