// rea decompile_all
// name: FUN_0053930c
// address: 0x53930c
// body: available
// range: 0x53930c-0x5393d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053930c(void)

{
  LPCWSTR lpString;
  undefined2 *puVar1;
  int iVar2;
  int in_stack_00000004;
  LPCWSTR local_8;

  puVar1 = *(undefined2 **)(in_stack_00000004 + -8);
  *(undefined2 *)(in_stack_00000004 + -10) = *puVar1;
  if (*(short *)(in_stack_00000004 + -10) == 0) {
    *(undefined1 *)(in_stack_00000004 + -0xb) = 1;
  }
  else {
    *(undefined2 *)(in_stack_00000004 + -0xe) = puVar1[1];
    local_8 = puVar1 + 2;
    if (*(char *)(in_stack_00000004 + -0xf) == '\0') {
      *(undefined2 *)(in_stack_00000004 + -0x12) = 1;
      FUN_00408320(in_stack_00000004 + -4,local_8);
      iVar2 = lstrlenA((LPCSTR)local_8);
      local_8 = (LPCWSTR)((int)local_8 + iVar2 + 1);
    }
    else {
      *(WCHAR *)(in_stack_00000004 + -0x12) = *local_8;
      lpString = puVar1 + 3;
      local_8 = lpString;
      iVar2 = lstrlenW(lpString);
      local_8 = local_8 + iVar2 + 1;
      FUN_00408350(in_stack_00000004 + -4,lpString);
    }
    thunk_FUN_00539304(&local_8);
    *(int *)(in_stack_00000004 + -0x18) = (int)local_8 - *(int *)(in_stack_00000004 + -8);
    *(LPCWSTR *)(in_stack_00000004 + -8) = local_8;
  }
  return;
}
