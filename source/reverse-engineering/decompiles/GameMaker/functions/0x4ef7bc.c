// rea decompile_all
// name: FUN_004ef7bc
// address: 0x4ef7bc
// body: available
// range: 0x4ef7bc-0x4ef858 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_004ef7bc(int param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [16];

  local_2c = *param_2;
  uStack_28 = param_2[1];
  uStack_24 = param_2[2];
  uStack_20 = param_2[3];
  if (*(int *)(param_1 + 0x90) != 0) {
    cVar1 = FUN_00405d08(*(int *)(param_1 + 0x90),0,param_1);
    if (cVar1 == '\0') {
      cVar1 = '\0';
      goto LAB_004ef7f1;
    }
  }
  cVar1 = '\x01';
LAB_004ef7f1:
  if (cVar1 != '\0') {
    iVar2 = FUN_004f0ebc(param_1,&local_2c);
    if (iVar2 == 0) {
      FUN_00405d08(param_1,0,&local_2c);
    }
    else {
      uVar3 = FUN_004edfcc(iVar2);
      puVar5 = auStack_1c;
      uVar4 = FUN_004edf8c(iVar2);
      FUN_0040c114(0,0,uVar4,puVar5,uVar3);
      FUN_00405d08(param_1,iVar2,auStack_1c);
    }
  }
  return cVar1;
}
