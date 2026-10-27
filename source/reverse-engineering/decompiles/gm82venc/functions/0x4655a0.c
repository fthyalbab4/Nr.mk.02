// rea decompile_all
// name: FUN_004655a0
// address: 0x4655a0
// body: available
// range: 0x4655a0-0x465632 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004655a0(int param_1,char param_2)

{
  LPVOID *ppv;
  undefined4 uVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  undefined4 uStack_1c;

  bVar6 = 0;
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00406510();
    cVar2 = extraout_DL;
  }
  FUN_0045ea7c(param_1,0);
  if (DAT_0068f100 == (int *)0x0) {
    ppv = (LPVOID *)FUN_0040b268(&DAT_0068f100);
    CoCreateInstance((IID *)PTR_DAT_00689128,(LPUNKNOWN)0x0,5,(IID *)&DAT_00465634,ppv);
  }
  else {
    (**(code **)(*DAT_0068f100 + 4))();
  }
  puVar4 = (undefined4 *)(param_1 + 0x41 + (uint)bVar6 * -8);
  puVar3 = (undefined4 *)(PTR_DAT_00688ae0 + (uint)bVar6 * -8 + 4);
  *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)PTR_DAT_00688ae0;
  puVar5 = puVar4 + (uint)bVar6 * -2 + 1;
  *puVar4 = *puVar3;
  *puVar5 = puVar3[(uint)bVar6 * -2 + 1];
  puVar5[(uint)bVar6 * -2 + 1] = (puVar3 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
  *(undefined1 *)(param_1 + 0x3c) = 0;
  uVar1 = FUN_00405fac(&LAB_004319cc,1);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  if (cVar2 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}
