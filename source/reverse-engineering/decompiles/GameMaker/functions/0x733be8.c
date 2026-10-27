// rea decompile_all
// name: FUN_00733be8
// address: 0x733be8
// body: available
// range: 0x733be8-0x733cb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x733c09 (push 0x733cba followed by fs-segment stack chaining); handler 0x733cba lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00733be8(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_10;
  int local_c;
  int local_8;

  puStack_20 = (undefined1 *)0x733bfe;
  local_8 = param_1;
  FUN_00407660(param_1);
  puStack_24 = &LAB_00733cba;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if (local_8 == 0) {
    puStack_20 = &stack0xfffffffc;
    FUN_00407a78(param_2);
  }
  else {
    iVar2 = local_8;
    puStack_20 = &stack0xfffffffc;
    if ((local_8 != 0) && (puStack_20 = &stack0xfffffffc, *(short *)(local_8 + -10) != 1)) {
      puStack_20 = &stack0xfffffffc;
      iVar2 = FUN_00407078(&local_8,local_8,0);
    }
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + -4);
    }
    FUN_00407e04(param_2,iVar3);
    local_c = 1;
    local_10 = 1;
    if (0 < iVar3) {
      do {
        uVar4 = FUN_007331a8(local_8,&local_c);
        if (local_c == -1) {
          FUN_0073315c(&PTR_LAB_00732f0c,1);
          FUN_00406618();
        }
        FUN_00733b1c(param_2,&local_10,uVar4);
      } while (local_c <= iVar3);
    }
    FUN_00407e04(param_2,local_10 + -1);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00733cc1;
  puStack_24 = (undefined1 *)0x733cb9;
  FUN_00406e5c(&local_8,uStack_28,puVar1);
  return;
}
