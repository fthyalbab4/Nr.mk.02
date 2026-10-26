// rea decompile_all
// name: FUN_00560220
// address: 0x560220
// body: available
// range: 0x560220-0x560292 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00560220(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  int local_8;

  FUN_00439168(param_1,0x20);
  local_20 = 0;
  local_1c = 0;
  if (*(char *)(param_1 + 0x42) == '\0') {
    if (*(int *)(param_1 + 0x30) == 0) {
      uVar2 = FUN_0055b0e4();
      *(undefined4 *)(param_1 + 0x30) = uVar2;
    }
    local_8 = *(int *)(param_1 + 0x30);
  }
  else {
    local_8 = *(int *)(param_1 + 0x38);
  }
  *(int *)(param_1 + 0x30) = local_8 + -1;
  while( true ) {
    cVar1 = FUN_005600e8(param_1,&local_8,local_24);
    if ((cVar1 == '\0') || (*(int *)(param_1 + 8) == 0x1000)) break;
    FUN_005601e4(param_1,local_24);
  }
  return;
}
