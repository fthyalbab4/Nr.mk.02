// rea decompile_all
// name: FUN_005849e8
// address: 0x5849e8
// body: available
// range: 0x5849e8-0x584a67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5849fd (push 0x584a68 followed by fs-segment stack chaining); handler 0x584a68 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005849e8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_34;
  undefined4 in_stack_ffffffd4;
  wchar_t *pwVar3;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_00584a68;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  uVar2 = FUN_00616588(&DAT_006160fc,1,*(undefined4 *)(param_1 + 8),0);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  pwVar3 = L"삄⵵葨塊＀Ѷ\xe868塊ꄀ陴hヿ䖍뫼\x04";
  cVar1 = FUN_00616664(uVar2);
  if (cVar1 == '\0') {
    pwVar3 = L"COMPILATION ERROR in condition of trigger ";
    in_stack_ffffffd4 = *(undefined4 *)(param_1 + 4);
    uStackY_34 = *(undefined4 *)PTR_DAT_00689674;
    FUN_0040875c(&local_8,4);
    FUN_006113b0(local_8,1);
  }
  *in_FS_OFFSET = uStackY_34;
  thunk_FUN_004072d8(&local_8,uStackY_34,in_stack_ffffffd4,&LAB_00584a6f,pwVar3);
  return;
}
