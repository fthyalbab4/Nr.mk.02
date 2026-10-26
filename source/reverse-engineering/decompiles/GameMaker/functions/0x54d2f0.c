// rea decompile_all
// name: FUN_0054d2f0
// address: 0x54d2f0
// body: available
// range: 0x54d2f0-0x54d40a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0054d2f0(int *param_1,undefined4 *param_2,undefined4 param_3,uint param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  int *piVar3;

  cVar1 = (**(code **)(*param_1 + 0x20))();
  if (((cVar1 == '\0') && (*param_5 < param_5[2])) && (param_5[1] < param_5[3])) {
    iVar2 = FUN_005415b8(param_1[0xb]);
    if (iVar2 == 1) {
      param_4 = CONCAT22(0xffff,(ushort)param_4 & 0xfffa);
    }
    piVar3 = (int *)FUN_00549010(&PTR_LAB_00539ee0,1,param_2,param_4,param_5,param_3,param_1);
    FUN_0043ba60(param_1[0xe],piVar3);
    piVar3[0x26] = param_1[0x1a];
    piVar3[0x27] = param_1[0x1b];
    piVar3[0x28] = param_1[0x1c];
    piVar3[0x29] = param_1[0x1d];
    piVar3[0x2a] = param_1[0x1e];
    piVar3[0x2b] = param_1[0x1f];
    piVar3[0x2c] = param_1[0x20];
    piVar3[0x2d] = param_1[0x21];
    piVar3[0x2e] = param_1[0x22];
    piVar3[0x2f] = param_1[0x23];
    if ((param_4 & 1) == 0) {
      (**(code **)(*piVar3 + 4))();
      piVar3 = (int *)0x0;
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 0;
      }
    }
    else {
      FUN_00448390(piVar3,(char)param_1[0x16]);
    }
  }
  else {
    piVar3 = (int *)0x0;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
    }
  }
  return piVar3;
}
