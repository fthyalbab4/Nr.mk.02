// rea decompile_all
// name: FUN_0055a138
// address: 0x55a138
// body: available
// range: 0x55a138-0x55a216 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055a138(int *param_1,char *param_2,uint param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;

  if ((((param_3 < 0xc) || (*param_2 != 'A')) || (param_2[1] != 'd')) ||
     (((param_2[2] != 'o' || (param_2[3] != 'b')) || (param_2[4] != 'e')))) {
    iVar6 = *param_1;
    *(undefined4 *)(iVar6 + 0x14) = 0x4e;
    *(uint *)(iVar6 + 0x18) = param_3 + param_4;
    (**(code **)(*param_1 + 4))(param_1,1);
  }
  else {
    bVar1 = param_2[7];
    bVar2 = param_2[8];
    bVar3 = param_2[9];
    bVar4 = param_2[10];
    bVar5 = param_2[0xb];
    iVar6 = *param_1;
    *(uint *)(iVar6 + 0x18) = (uint)(byte)param_2[5] * 0x100 + (uint)(byte)param_2[6];
    *(uint *)(iVar6 + 0x1c) = (uint)bVar1 * 0x100 + (uint)bVar2;
    *(uint *)(iVar6 + 0x20) = (uint)bVar3 * 0x100 + (uint)bVar4;
    *(uint *)(iVar6 + 0x24) = (uint)bVar5;
    *(undefined4 *)(*param_1 + 0x14) = 0x4c;
    (**(code **)(*param_1 + 4))(param_1,1);
    param_1[0x49] = 1;
    *(byte *)(param_1 + 0x4a) = bVar5;
  }
  return;
}
