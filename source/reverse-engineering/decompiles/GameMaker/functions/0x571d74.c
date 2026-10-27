// rea decompile_all
// name: FUN_00571d74
// address: 0x571d74
// body: available
// range: 0x571d74-0x571e50 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00571d74(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 local_18 [16];
  int *local_8;

  local_8 = param_1;
  cVar1 = (**(code **)(*param_1 + 0xf8))();
  if (cVar1 != '\0') {
    if (local_8[0xbb] == 0) {
      iVar2 = (**(code **)(*local_8 + 0xf4))();
      local_8[0xbb] = iVar2;
      FUN_0056b9a0(iVar2,local_8);
      (**(code **)(*(int *)local_8[0xbb] + 0x78))((int *)local_8[0xbb],local_8);
      FUN_00571d04();
    }
    else if ((local_8[0xa2] != local_8[0xbc]) || (local_8[0xa3] != local_8[0xbd])) {
      FUN_00571c98(local_8);
      FUN_00571d04();
    }
    cVar1 = (**(code **)(*local_8 + 0xf8))();
    if (cVar1 != '\0') {
      FUN_0056c828(local_8,local_8[0xa2],local_8[0xa3],local_18);
      FUN_0056c26c(local_8[0xbb],local_18);
    }
  }
  return;
}
