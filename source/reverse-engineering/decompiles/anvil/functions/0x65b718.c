// rea decompile_all
// name: FUN_0065b718
// address: 0x65b718
// body: available
// range: 0x65b718-0x65b84f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x65b742 (push 0x65b850 followed by fs-segment stack chaining); handler 0x65b850 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065b718(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 local_3c [16];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_8;

  iVar2 = 7;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puStack_1c = (undefined1 *)0x65b737;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_20 = &LAB_0065b850;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  uStack_28 = 0x65b751;
  puStack_1c = &stack0xfffffffc;
  uVar1 = FUN_00405fac(&PTR_LAB_0050b4b8,1);
  uStack_28 = 0x65b75f;
  FUN_0050c318(uVar1,local_8);
  uStack_28 = 0x65b767;
  iVar2 = FUN_0050bbe0(uVar1);
  if (iVar2 == 0x191) {
    uStack_28 = 0x65b785;
    uStack_28 = FUN_0050bbe0(uVar1);
    *(undefined4 *)(param_1 + 4) = uStack_28;
    uStack_2c = 0x65b79e;
    FUN_00409dfc(param_1 + 8,&DAT_00658bf4,1);
    iVar2 = *(int *)(param_1 + 4);
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      do {
        uStack_28 = 0x65b7b7;
        FUN_0065a47c(uVar1,&local_24);
        uStack_28 = 0x65b7ce;
        FUN_00409360(*(int *)(param_1 + 8) + iVar3 * 0x18,&local_24,&DAT_00615f70);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    uStack_28 = *(undefined4 *)(param_1 + 4);
    uStack_2c = 0x65b7e9;
    FUN_00409dfc(param_1 + 0xc,&DAT_00658bf4,1);
    iVar2 = *(int *)(param_1 + 4);
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      do {
        uStack_28 = 0x65b802;
        FUN_0065a47c(uVar1,local_3c);
        uStack_28 = 0x65b819;
        FUN_00409360(*(int *)(param_1 + 0xc) + iVar3 * 0x18,local_3c,&DAT_00615f70);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    uStack_28 = 0x65b825;
    FUN_00405fdc(uVar1);
  }
  else {
    uStack_28 = 0x65b776;
    FUN_00405fdc(uVar1);
  }
  *in_FS_OFFSET = local_24;
  puStack_1c = &LAB_0065b857;
  puStack_20 = (undefined1 *)0x65b847;
  FUN_00409120(local_3c,&DAT_00615f70,2);
  puStack_20 = (undefined1 *)0x65b84f;
  thunk_FUN_004072d8(&local_8);
  return;
}
