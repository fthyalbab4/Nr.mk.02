// rea decompile_all
// name: FUN_006caa48
// address: 0x6caa48
// body: available
// range: 0x6caa48-0x6cab99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6caa68 (push 0x6cab9a followed by fs-segment stack chaining); handler 0x6cab9a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006caa48(int param_1,undefined4 param_2,char param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  char local_5;

  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_006cab9a;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_5 = param_3;
  FUN_0052f12c(param_2,800);
  FUN_0052f168(param_2,*(undefined4 *)(param_1 + 4));
  FUN_0052f168(param_2,*(undefined4 *)(param_1 + 8));
  FUN_0052f240(param_2,*(undefined1 *)(param_1 + 0xc));
  FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x10));
  if (local_5 == '\0') {
    FUN_0052f240(param_2,*(undefined1 *)(param_1 + 0x14));
    if ((*(char *)(param_1 + 0xc) != '\0') && (*(char *)(param_1 + 0x14) != '\0')) {
      FUN_0052f298(param_2,*(undefined4 *)(param_1 + 0x18));
    }
  }
  else {
    FUN_0052f240(param_2,1);
    if ((*(char *)(param_1 + 0xc) == '\0') || (*(char *)(param_1 + 0x14) != '\0')) {
      if (*(char *)(param_1 + 0xc) != '\0') {
        FUN_0052f298(param_2,*(undefined4 *)(param_1 + 0x18));
      }
    }
    else {
      uVar3 = FUN_00405a4c(&LAB_00433630,1);
      FUN_0043fef4(uVar3);
      cVar2 = FUN_00416e40(*(undefined4 *)(param_1 + 8));
      if (cVar2 == '\0') {
        FUN_0040839c(&local_c,L"Cannot locate include file: ",*(undefined4 *)(param_1 + 8));
        FUN_004d43f8(local_c);
        goto LAB_006cab84;
      }
      FUN_0043ff44(uVar3,*(undefined4 *)(param_1 + 8));
      FUN_0052f298(param_2,uVar3);
      FUN_00405a7c(uVar3);
    }
  }
  FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x1c));
  FUN_0052f168(param_2,*(undefined4 *)(param_1 + 0x20));
  FUN_0052f240(param_2,*(undefined1 *)(param_1 + 0x24));
  FUN_0052f240(param_2,*(undefined1 *)(param_1 + 0x25));
  FUN_0052f240(param_2,*(undefined1 *)(param_1 + 0x26));
LAB_006cab84:
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_006caba1;
  puStack_20 = (undefined1 *)0x6cab99;
  thunk_FUN_00406e5c(&local_c,uStack_24,puVar1);
  return;
}
