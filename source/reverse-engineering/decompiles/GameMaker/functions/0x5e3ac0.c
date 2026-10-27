// rea decompile_all
// name: FUN_005e3ac0
// address: 0x5e3ac0
// body: available
// range: 0x5e3ac0-0x5e3b99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5e3add (push 0x5e3b9a followed by fs-segment stack chaining); handler 0x5e3b9a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e3ac0(undefined4 param_1,int param_2,undefined4 param_3)

{
  short sVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_24 = &LAB_005e3b9a;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_00407f0c(&local_8,param_1);
  FUN_00407f0c(&local_c,param_3);
  if (param_2 < 1) {
    FUN_005df624(&PTR_LAB_005deea4,L"Invalid ACharPos");
  }
  FUN_00407058(&local_8);
  iVar3 = FUN_00408238();
  if (param_2 <= iVar3) {
    iVar3 = FUN_00407058(&local_8);
    if ((iVar3 == 0) || (*(uint *)(iVar3 + -4) <= param_2 - 1U)) {
      iVar3 = thunk_FUN_00404478();
    }
    sVar1 = *(short *)(iVar3 + -2 + param_2 * 2);
    FUN_00407058(&local_c);
    local_10 = FUN_00408238();
    if (0 < local_10) {
      iVar3 = 1;
      do {
        iVar4 = FUN_00407058(&local_c);
        if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= iVar3 - 1U)) {
          iVar4 = thunk_FUN_00404478();
        }
        if (sVar1 == *(short *)(iVar4 + -2 + iVar3 * 2)) break;
        iVar3 = iVar3 + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
  }
  puVar2 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005e3ba1;
  puStack_24 = (undefined1 *)0x5e3b99;
  thunk_FUN_00406e80(&local_c,2,puVar2);
  return;
}
