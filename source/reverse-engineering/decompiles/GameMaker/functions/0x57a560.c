// rea decompile_all
// name: FUN_0057a560
// address: 0x57a560
// body: available
// range: 0x57a560-0x57a56b inclusive
// range: 0x57a57b-0x57a64b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0057a587) */

void FUN_0057a560(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;

  param_1[1] = 0;
  uVar1 = FUN_0057a688(param_1);
  puVar2 = (undefined4 *)FUN_0057a64c(param_1,0x50);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_0057a68c(param_1);
    iVar4 = *param_1;
    *(undefined4 *)(iVar4 + 0x14) = 0x35;
    *(undefined4 *)(iVar4 + 0x18) = 0;
    (**(code **)*param_1)();
  }
  *puVar2 = FUN_00579a44;
  iVar4 = 1;
  puVar2[1] = FUN_00579b74;
  puVar2[2] = FUN_00579c14;
  puVar2[3] = FUN_00579ce8;
  puVar2[4] = FUN_00579dcc;
  puVar2[5] = FUN_00579e34;
  puVar2[6] = FUN_00579e9c;
  puVar2[7] = FUN_0057a18c;
  puVar2[8] = FUN_0057a2d8;
  puVar2[9] = FUN_0057a424;
  puVar2[10] = FUN_0057a528;
  puVar2[0xb] = uVar1;
  puVar3 = puVar2 + 0xd;
  do {
    iVar4 = iVar4 + -1;
    *puVar3 = 0;
    puVar3[2] = 0;
    puVar3 = puVar3 + -1;
  } while (-1 < iVar4);
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0x50;
  param_1[1] = (int)puVar2;
  return;
}
