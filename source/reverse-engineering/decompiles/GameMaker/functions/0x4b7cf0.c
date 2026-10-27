// rea decompile_all
// name: FUN_004b7cf0
// address: 0x4b7cf0
// body: available
// range: 0x4b7cf0-0x4b7dd5 inclusive
// range: 0x4b7ddd-0x4b7de0 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4b7d9a (push 0x4b7dd6 followed by fs-segment stack chaining); handler 0x4b7dd6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b7cf0(void)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_c;
  undefined4 local_8;

  puStack_10 = (undefined1 *)0x4b7d04;
  local_c = FUN_004b81c8(*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 4));
  puStack_10 = (undefined1 *)0x4b7d0f;
  cVar2 = FUN_004f7a54(local_c);
  if (((cVar2 == '\0') && ((*(ushort *)(local_c + 0x1c) & 3) == 0)) &&
     (*(char *)(local_c + 0x2f9) == '\0')) {
    if (*(int *)(local_c + 0x2b8) == 0) {
      puStack_10 = (undefined1 *)0x4b7d5e;
      uVar3 = FUN_00405a4c(&LAB_00433630,1);
      *(undefined4 *)(local_c + 0x2b8) = uVar3;
    }
    else {
      puStack_10 = (undefined1 *)0x0;
      puStack_14 = (undefined1 *)0x0;
      uStack_18 = 0x4b7d72;
      FUN_0043f2b8();
    }
    puStack_10 = (undefined1 *)0x400;
    puStack_14 = (undefined1 *)0x4b7d8c;
    local_8 = FUN_0044077c(&PTR_LAB_00436388,1,*(undefined4 *)(local_c + 0x2b8));
    puStack_14 = &LAB_004b7dd6;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    FUN_004445d8(local_8,*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 4));
    puVar1 = puStack_10;
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x4b7ddd;
    puStack_14 = (undefined1 *)0x4b7dc3;
    FUN_00405a7c(local_8,uStack_18,puVar1);
    puStack_14 = (undefined1 *)0x0;
    uStack_18 = 0;
    FUN_0043f254(*(undefined4 *)(local_c + 0x2b8));
    return;
  }
  return;
}
