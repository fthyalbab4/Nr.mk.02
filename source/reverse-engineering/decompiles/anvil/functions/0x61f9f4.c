// rea decompile_all
// name: FUN_0061f9f4
// address: 0x61f9f4
// body: available
// range: 0x61f9f4-0x61fb86 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x61fa0b (push 0x61fb87 followed by fs-segment stack chaining); handler 0x61fb87 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0061f9f4(void)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  puStack_24 = &LAB_0061fb87;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puVar1 = &stack0xfffffffc;
  if (DAT_006886a8 != (int *)0x0) {
    uVar2 = (**(code **)(*DAT_006886a4 + 0x20))();
    puVar1 = puStack_20;
    if ((uVar2 & 0x80000000) == 0) {
      iVar3 = (**(code **)(*DAT_006886a4 + 0x2c))();
      if (iVar3 != 0) {
        DAT_0085af74 = 0;
        DAT_0085af7c = 3;
      }
      DAT_0085b3a0 = DAT_0085af7c;
      DAT_0085b39c = DAT_0085af74;
      FUN_0056b59c();
      do {
        FUN_0056b5bc();
        if (DAT_006869a0 == 0) break;
      } while (0 < *(int *)(DAT_006869a0 + 8));
      iVar3 = (**(code **)(*DAT_006886a8 + 0x38))();
      FUN_0061e504();
      if (iVar3 != 0) {
        FUN_005315a4(iVar3,&local_8);
        Sleep(5000);
        iVar3 = (**(code **)(*DAT_006886a8 + 0x38))();
        if (iVar3 != 0) {
          Sleep(5000);
          DAT_0085af74 = 0;
          DAT_0085af7c = 1;
          DAT_0085b39c = 0;
          DAT_0085b3a0 = 1;
          uVar2 = (**(code **)(*DAT_006886a8 + 0x38))();
          if ((uVar2 & 0x80000000) != 0) {
            FUN_00407100();
          }
        }
      }
      (**(code **)(*DAT_006886a8 + 0x1c))();
      (**(code **)(*DAT_006886a8 + 0x90))();
      FUN_0061ed28();
      puVar1 = puStack_20;
    }
  }
  puStack_20 = puVar1;
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0061fb8e;
  puStack_24 = (undefined1 *)0x61fb86;
  FUN_004072d8(&local_8,uStack_28,puVar1);
  return;
}
