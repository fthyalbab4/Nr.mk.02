// rea decompile_all
// name: FUN_0057e96c
// address: 0x57e96c
// body: available
// range: 0x57e96c-0x57eb29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x57e989 (push 0x57eb2a followed by fs-segment stack chaining); handler 0x57eb2a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057e96c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined1 local_5;

  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_0057eb2a;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_5 = 0;
  FUN_0057e7c8(param_1);
  iVar4 = FUN_0050bbe0(param_2);
  if (iVar4 == 800) {
    FUN_0050bc1c(param_2,&local_c);
    FUN_00408194(param_1 + 4,local_c);
    uVar5 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 8) = uVar5;
    uVar3 = FUN_0050bcd0(param_2);
    *(undefined1 *)(param_1 + 0xc) = uVar3;
    uVar3 = FUN_0050bcd0(param_2);
    *(undefined1 *)(param_1 + 0xd) = uVar3;
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(undefined4 *)(param_1 + 0x14) = 3;
    uVar6 = FUN_0050bbe0(param_2);
    *(uint *)(param_1 + 0x18) = uVar6;
    *(uint *)(param_1 + 0x10) = uVar6 >> 0x10 & 0xff;
    uVar6 = *(uint *)(param_1 + 0x18) >> 0x18;
    if (uVar6 != 0) {
      *(uint *)(param_1 + 0x14) = uVar6 - 1;
    }
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffff;
    uVar5 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0x1c) = uVar5;
    *(undefined4 *)(param_1 + 0x1834) = 0xffffffff;
    iVar4 = 0;
    do {
      uVar5 = FUN_0050bbe0(param_2);
      *(undefined4 *)(param_1 + 0x24 + iVar4 * 4) = uVar5;
      uVar5 = FUN_0050bbe0(param_2);
      *(undefined4 *)(param_1 + 0x424 + iVar4 * 4) = uVar5;
      uVar5 = FUN_0050bbe0(param_2);
      *(undefined4 *)(param_1 + 0x824 + iVar4 * 4) = uVar5;
      uVar5 = FUN_0050bbe0(param_2);
      *(undefined4 *)(param_1 + 0xc24 + iVar4 * 4) = uVar5;
      uVar5 = FUN_0050bbe0(param_2);
      *(undefined4 *)(param_1 + 0x1024 + iVar4 * 4) = uVar5;
      uVar5 = FUN_0050bbe0(param_2);
      *(undefined4 *)(param_1 + 0x1424 + iVar4 * 4) = uVar5;
      iVar1 = *(int *)(param_1 + 0xc24 + iVar4 * 4);
      if (*(int *)(param_1 + 0x1834) < iVar1) {
        *(int *)(param_1 + 0x1834) = iVar1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x100);
    uVar5 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0x1824) = uVar5;
    uVar5 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0x1828) = uVar5;
    uVar5 = FUN_0050be14(param_2);
    FUN_00409dfc(param_1 + 0x182c,&DAT_0057c1dc,1,
                 *(int *)(param_1 + 0x1824) * *(int *)(param_1 + 0x1828));
    FUN_0043ca88(uVar5,*(undefined4 *)(param_1 + 0x182c),
                 *(int *)(param_1 + 0x1824) * *(int *)(param_1 + 0x1828));
    FUN_00405fdc(uVar5);
    local_5 = 1;
  }
  puVar2 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0057eb31;
  puStack_20 = (undefined1 *)0x57eb29;
  thunk_FUN_004072d8(&local_c,uStack_24,puVar2);
  return;
}
