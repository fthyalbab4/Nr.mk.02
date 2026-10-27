// rea decompile_all
// name: entry
// address: 0x7722d8
// body: available
// range: 0x7722d8-0x772355 inclusive
// range: 0x77239c-0x7723f3 inclusive
// range: 0x77277b-0x772795 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x7722fe (push 0x772796 followed by fs-segment stack chaining); handler 0x772796 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x772351 (push 0x772752 followed by fs-segment stack chaining); handler 0x772752 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x7723b8 (push 0x7723f4 followed by fs-segment stack chaining); handler 0x7723f4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void entry(void)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 local_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;

  local_18 = 0;
  local_1c = 0;
  puStack_2c = (undefined1 *)0x7722f3;
  FUN_0040bd84(&DAT_0075e96c);
  puStack_30 = &LAB_00772796;
  local_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_34;
  *(ushort *)PTR_DAT_00781dfc = *(ushort *)PTR_DAT_00781dfc | 4;
  *(ushort *)PTR_DAT_00781dfc = *(ushort *)PTR_DAT_00781dfc | 0x10;
  puStack_38 = (undefined1 *)0x772318;
  puStack_2c = &stack0xfffffffc;
  FUN_0075e50c();
  puStack_38 = (undefined1 *)0x772324;
  DAT_00826494 = FUN_00405a4c(&DAT_0075e7bc,1);
  iVar1 = *(int *)PTR_DAT_00782280;
  *(undefined4 *)(iVar1 + 0xf4) = DAT_00826494;
  *(undefined1 **)(iVar1 + 0xf0) = &LAB_0075e85c;
  puStack_3c = &LAB_00772752;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_44 = (undefined1 *)0x7723a8;
  puStack_38 = &stack0xfffffffc;
  FUN_0051f838(*(undefined4 *)PTR_DAT_00782280);
  puStack_44 = (undefined1 *)0x7723ad;
  FUN_005d04b0();
  puStack_48 = &LAB_007723f4;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  puStack_44 = &stack0xfffffffc;
  cVar3 = FUN_0070057c(*(undefined4 *)PTR_DAT_00781870);
  if (cVar3 == '\0') {
    cVar3 = FUN_007006f8();
    if (cVar3 != '\0') {
      FUN_0040670c();
      puVar2 = puStack_2c;
      *in_FS_OFFSET = uStack_40;
      *in_FS_OFFSET = local_34;
      puStack_2c = &DAT_0077279d;
      puStack_30 = (undefined1 *)0x772795;
      thunk_FUN_00406e80(&local_1c,2,puVar2);
      return;
    }
  }
  *in_FS_OFFSET = uStack_4c;
  return;
}
