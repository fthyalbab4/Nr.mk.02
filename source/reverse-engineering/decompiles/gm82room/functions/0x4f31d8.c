// rea decompile_all
// name: FUN_004f31d8
// address: 0x4f31d8
// body: available
// range: 0x4f31d8-0x4f32d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f31d8(int param_1,uint param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  byte bVar4;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  char local_10;

  FUN_00404f38(param_1 + 0x15,0x100,0);
  *(undefined1 *)(param_1 + 0x14) = 1;
  iVar3 = FUN_004f21c8(param_1);
  cVar1 = *(char *)(iVar3 + 0x461);
  if (cVar1 == '\0') {
    FUN_004f2178(param_1,2);
    uVar2 = FUN_004f16dc(param_2 & 0xff);
    *(undefined2 *)(param_1 + 0x15) = uVar2;
  }
  else if (cVar1 == '\x02') {
    FUN_004f2178(param_1,6);
    uVar2 = FUN_004f16dc(param_2 & 0xff);
    *(undefined2 *)(param_1 + 0x15) = uVar2;
    uVar2 = FUN_004f16dc(param_2 >> 8 & 0xff);
    *(undefined2 *)(param_1 + 0x17) = uVar2;
    uVar2 = FUN_004f16dc(param_2 >> 0x10 & 0xff);
    *(undefined2 *)(param_1 + 0x19) = uVar2;
  }
  else if (cVar1 == '\x03') {
    local_12 = (undefined1)param_2;
    local_13 = (undefined1)(param_2 >> 8);
    local_14 = (undefined1)(param_2 >> 0x10);
    local_10 = *(char *)(iVar3 + 0x41);
    bVar4 = 0;
    do {
      cVar1 = FUN_004156dc(iVar3 + 0x49 + (uint)bVar4 * 4,&local_14,3);
      if (cVar1 != '\0') break;
      bVar4 = bVar4 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != '\0');
    FUN_00404f38(param_1 + 0x15,bVar4,0xff);
    FUN_004f2178(param_1,bVar4 + 1);
  }
  return;
}
