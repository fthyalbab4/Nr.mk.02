// rea decompile_all
// name: FUN_0053f6cc
// address: 0x53f6cc
// body: available
// range: 0x53f6cc-0x53f8d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x53f6e6 (push 0x53f8d3 followed by fs-segment stack chaining); handler 0x53f8d3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053f6cc(void)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  undefined4 uStack_158;
  undefined1 *puStack_154;
  undefined1 *puStack_150;
  _OSVERSIONINFOW local_148;
  undefined4 local_2c [9];
  undefined4 local_8;

  puStack_150 = &stack0xfffffffc;
  local_8 = 0;
  puStack_154 = &LAB_0053f8d3;
  uStack_158 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_158;
  FUN_00415c04(*(undefined4 *)PTR_DAT_00688c68,&local_8);
  if (*(int *)PTR_DAT_0068966c == 1) {
    uVar1 = *(uint *)PTR_DAT_00689288;
    bVar4 = uVar1 == 10;
    if (uVar1 < 10) {
      FUN_0040891c(local_8,&DAT_0053f8f0);
      if (!bVar4) {
        FUN_0040891c(local_8,&DAT_0053f900);
      }
    }
    else if (((uVar1 - 10 < 0x50) && (bVar4 = DAT_00690414 == 0x4005a, !bVar4)) &&
            (FUN_0040891c(local_8,&DAT_0053f910), !bVar4)) {
      FUN_0040891c(local_8,&DAT_0053f8f0);
    }
  }
  else if (((*(int *)PTR_DAT_0068966c == 2) && (iVar3 = *(int *)PTR_DAT_00688cd4, iVar3 != 3)) &&
          (iVar3 != 4)) {
    if (iVar3 == 5) {
      iVar3 = *(int *)PTR_DAT_00689288;
      if (((iVar3 != 0) && (iVar3 != 1)) && (iVar3 == 2)) {
        local_148.dwOSVersionInfoSize = 0x11c;
        local_2c[0] = 0;
        FUN_0053f914(local_2c);
        iVar3 = GetSystemMetrics(0x59);
        if ((iVar3 == 0) && ((short)local_2c[0] != 0)) {
          GetVersionExW(&local_148);
        }
      }
    }
    else if (iVar3 == 6) {
      if (*(int *)PTR_DAT_00689288 == 0) {
        local_148.dwOSVersionInfoSize = 0x11c;
        GetVersionExW(&local_148);
      }
      else if (*(int *)PTR_DAT_00689288 == 1) {
        local_148.dwOSVersionInfoSize = 0x11c;
        GetVersionExW(&local_148);
      }
    }
  }
  puVar2 = puStack_150;
  *in_FS_OFFSET = uStack_158;
  puStack_150 = &LAB_0053f8da;
  puStack_154 = (undefined1 *)0x53f8d2;
  thunk_FUN_004072d8(&local_8,uStack_158,puVar2);
  return;
}
