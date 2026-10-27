// rea decompile_all
// name: FUN_004b7a14
// address: 0x4b7a14
// body: available
// range: 0x4b7a14-0x4b7b20 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004b7a14(void)

{
  HANDLE pvVar1;
  BOOL BVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 uVar5;
  HWND in_stack_00000004;

  *(HWND *)((int)DAT_00681840 + 600) = in_stack_00000004;
  BVar2 = IsWindowUnicode(in_stack_00000004);
  if (BVar2 == 0) {
    SetWindowLongW(in_stack_00000004,-4,*(LONG *)((int)DAT_00681840 + 0x25c));
    uVar3 = GetWindowLongW(in_stack_00000004,-0x10);
    if ((uVar3 & 0x40000000) != 0) {
      LVar4 = GetWindowLongW(in_stack_00000004,-0xc);
      if (LVar4 == 0) {
        SetWindowLongW(in_stack_00000004,-0xc,(LONG)in_stack_00000004);
      }
    }
  }
  else {
    SetWindowLongW(in_stack_00000004,-4,*(LONG *)((int)DAT_00681840 + 0x25c));
    uVar3 = GetWindowLongW(in_stack_00000004,-0x10);
    if ((uVar3 & 0x40000000) != 0) {
      LVar4 = GetWindowLongW(in_stack_00000004,-0xc);
      if (LVar4 == 0) {
        SetWindowLongW(in_stack_00000004,-0xc,(LONG)in_stack_00000004);
      }
    }
  }
  SetPropW(in_stack_00000004,(LPCWSTR)(uint)DAT_0068f25a,DAT_00681840);
  SetPropW(in_stack_00000004,(LPCWSTR)(uint)DAT_0068f258,DAT_00681840);
  pvVar1 = DAT_00681840;
  DAT_00681840 = (HANDLE)0x0;
  uVar5 = (**(code **)((int)pvVar1 + 0x25c))();
  return uVar5;
}
