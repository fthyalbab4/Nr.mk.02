// rea decompile_all
// name: FUN_006261b4
// address: 0x6261b4
// body: available
// range: 0x6261b4-0x6262ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6261cf (push 0x6262ad followed by fs-segment stack chaining); handler 0x6262ad lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006261b4(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_006262ad;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_006260e0(param_1);
  iVar3 = FUN_0050bbe0(param_2);
  if (iVar3 == 800) {
    FUN_0050bc1c(param_2,&local_8);
    FUN_00408194(param_1 + 4,local_8);
    FUN_0050bc1c(param_2,&local_c);
    FUN_00408194(param_1 + 8,local_c);
    uVar2 = FUN_0050bcd0(param_2);
    *(undefined1 *)(param_1 + 0xc) = uVar2;
    uVar4 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
    uVar2 = FUN_0050bcd0(param_2);
    *(undefined1 *)(param_1 + 0x14) = uVar2;
    if ((*(char *)(param_1 + 0xc) != '\0') && (*(char *)(param_1 + 0x14) != '\0')) {
      FUN_00405fdc(*(undefined4 *)(param_1 + 0x18));
      uVar4 = FUN_0050be14(param_2);
      *(undefined4 *)(param_1 + 0x18) = uVar4;
    }
    uVar4 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    FUN_0050bc1c(param_2,&local_10);
    FUN_00408194(param_1 + 0x20,local_10);
    uVar2 = FUN_0050bcd0(param_2);
    *(undefined1 *)(param_1 + 0x24) = uVar2;
    uVar2 = FUN_0050bcd0(param_2);
    *(undefined1 *)(param_1 + 0x25) = uVar2;
    uVar2 = FUN_0050bcd0(param_2);
    *(undefined1 *)(param_1 + 0x26) = uVar2;
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_006262b4;
  puStack_24 = (undefined1 *)0x6262ac;
  thunk_FUN_004072fc(&local_10,3,puVar1);
  return;
}
