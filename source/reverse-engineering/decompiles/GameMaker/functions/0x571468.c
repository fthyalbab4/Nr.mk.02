// rea decompile_all
// name: FUN_00571468
// address: 0x571468
// body: available
// range: 0x571468-0x5715df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00571468(int *param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
                 undefined4 param_7)

{
  char cVar1;
  int iVar2;
  int local_c;
  int local_8;

  local_c = param_3;
  local_8 = param_2;
  cVar1 = FUN_00405d08(param_1);
  if ((cVar1 != '\0') && (param_5 == 0)) {
    iVar2 = FUN_004edf8c(param_1);
    local_8 = iVar2 - local_8;
  }
  if (local_c == param_1[0xb8]) {
    return;
  }
  if ((*(int *)(param_6 + 0x18) == param_1[0xb8]) && (local_8 < *(int *)(param_6 + 4))) {
    return;
  }
  if ((*(int *)(param_6 + 0x20) + -1 == param_1[0xb8]) && (*(int *)(param_6 + 8) < local_8)) {
    return;
  }
  FUN_0056ec74(param_1);
  if (local_8 < *(int *)(param_6 + 4)) {
    if (*(int *)(param_6 + 0x18) < param_1[0xb8]) {
      FUN_0056f5a0(param_1,param_5,0,0,0);
      (**(code **)(*param_1 + 0x9c))();
      FUN_0056dcec(param_1,param_7);
    }
    local_c = *(int *)(param_6 + 0x1c);
  }
  else if (local_8 < *(int *)(param_6 + 0x14)) {
    if (local_c < 0) {
      local_c = param_1[0xb8];
    }
  }
  else {
    if ((*(int *)(param_6 + 0x10) == param_1[0xb8]) &&
       (param_1[0xb8] < *(int *)(param_6 + 0x20) + -1)) {
      FUN_0056f5a0(param_1,param_5,1,0,0);
      (**(code **)(*param_1 + 0x9c))();
      FUN_0056dcec(param_1,param_7);
    }
    local_c = *(int *)(param_6 + 0x10);
  }
  if ((((char)param_1[0xc6] == '\x05') &&
      (cVar1 = FUN_00405d08(param_1,param_1 + 0xb7,&local_c,param_4), cVar1 != '\0')) ||
     (((char)param_1[0xc6] == '\x04' &&
      (cVar1 = FUN_00405d08(param_1,param_1 + 0xb7,&local_c,param_4), cVar1 != '\0')))) {
    param_1[0xb8] = local_c;
  }
  FUN_0056ec74(param_1);
  return;
}
