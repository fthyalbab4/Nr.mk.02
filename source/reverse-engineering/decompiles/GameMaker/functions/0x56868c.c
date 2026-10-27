// rea decompile_all
// name: FUN_0056868c
// address: 0x56868c
// body: available
// range: 0x56868c-0x56871d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5686a6 (push 0x56871e followed by fs-segment stack chaining); handler 0x56871e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056868c(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0056871e;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00567578(param_1,&local_8);
  cVar2 = FUN_0056792c(param_1);
  if (cVar2 != '\0') {
    cVar2 = FUN_0047d960(param_1);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*param_1 + 0x118))(param_1,local_8,&local_c);
      if (cVar2 == '\0') {
        if ((*(byte *)(param_1 + 7) & 0x10) == 0) {
          *(byte *)((int)param_1 + 0x2ad) = *(byte *)((int)param_1 + 0x2ad) | 2;
          (**(code **)(*param_1 + 0xe8))();
        }
        FUN_00567b78(param_1,local_c);
        (**(code **)(*param_1 + 0x11c))();
      }
    }
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00568725;
  puStack_1c = (undefined1 *)0x56871d;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
