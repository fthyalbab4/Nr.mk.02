// rea decompile_all
// name: FUN_006554bc
// address: 0x6554bc
// body: available
// range: 0x6554bc-0x655583 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6554da (push 0x655584 followed by fs-segment stack chaining); handler 0x655584 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006554bc(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;

  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_00655584;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_c = param_1;
  iVar2 = FUN_0071cdcc(param_2);
  if (iVar2 == 3) {
    iVar2 = FUN_0071cdfc(param_2);
    if (*(int *)(DAT_0077f2cc + iVar2 * 4) != 0) {
      FUN_0040839c(&local_10,L"#define ",*(undefined4 *)(DAT_0077f2d4 + iVar2 * 4));
      FUN_00408968(local_c,local_10);
      FUN_00405540();
      FUN_00404484();
      FUN_00408968(local_c,*(undefined4 *)(*(int *)(DAT_0077f2cc + iVar2 * 4) + 4));
      FUN_00405540();
      FUN_00404484();
    }
  }
  else {
    iVar2 = FUN_004ad490(param_2);
    if (-1 < iVar2 + -1) {
      iVar4 = 0;
      do {
        uVar3 = FUN_004ad3b4(param_2,iVar4);
        FUN_006554bc(local_c,uVar3);
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0065558b;
  puStack_24 = (undefined1 *)0x655583;
  thunk_FUN_00406e5c(&local_10,uStack_28,puVar1);
  return;
}
