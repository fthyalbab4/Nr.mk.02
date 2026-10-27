// rea decompile_all
// name: FUN_006291e4
// address: 0x6291e4
// body: available
// range: 0x6291e4-0x6292ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006291e4(undefined4 param_1,uint param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 local_10;
  char local_9;
  uint local_8;

  if (-1 < (int)param_2) {
    uVar2 = param_2 >> 2;
    do {
      uVar2 = uVar2 - 1;
    } while (-1 < (int)uVar2);
  }
  local_8 = param_2;
  piVar1 = (int *)FUN_00405fac(&LAB_004319cc,1);
  FUN_0043c854(piVar1);
  (**(code **)(*piVar1 + 0x10))(piVar1,&stack0xffffffe4,local_8 + 1);
  FUN_0043c854(piVar1);
  (**(code **)(*piVar1 + 0xc))(piVar1,param_3 + 4,1);
  (**(code **)(*piVar1 + 0xc))(piVar1,param_3 + 8,4);
  (**(code **)(*piVar1 + 0xc))(piVar1,&local_9,1);
  if (local_9 == '\0') {
    *(undefined4 *)(param_3 + 0x10) = 0;
    (**(code **)(*piVar1 + 0xc))(piVar1,param_3 + 0x18,8);
  }
  else {
    *(undefined4 *)(param_3 + 0x10) = 1;
    (**(code **)(*piVar1 + 0xc))(piVar1,&local_10,4);
    FUN_00407c34(param_3 + 0x20,local_10,0xfde9);
    FUN_0043ca88(piVar1,param_3 + 0x20,local_10);
  }
  FUN_00405fdc(piVar1);
  return;
}
