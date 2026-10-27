// rea decompile_all
// name: FUN_0046a8e0
// address: 0x46a8e0
// body: available
// range: 0x46a8e0-0x46a99e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0046a8e0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_14;

  puVar5 = &local_14;
  if ((param_1 == (int *)0x0) || (param_1[7] == 0)) {
    uVar3 = 0xfffffffe;
  }
  else {
    piVar1 = (int *)param_1[7];
    if ((param_1[1] == 0) && ((uint)piVar1[0xf] < 8)) {
      uVar3 = 0xfffffffb;
    }
    else {
      local_14 = param_3;
      if (*piVar1 != 0x1d) {
        *piVar1 = 0x1d;
        piVar1[0xe] = piVar1[0xe] << ((byte)piVar1[0xf] & 7);
        piVar1[0xf] = piVar1[0xf] - (piVar1[0xf] & 7U);
        iVar4 = 0;
        while (7 < (uint)piVar1[0xf]) {
          iVar4 = iVar4 + 1;
          *(char *)puVar5 = (char)piVar1[0xe];
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          piVar1[0xe] = (uint)piVar1[0xe] >> 8;
          piVar1[0xf] = piVar1[0xf] + -8;
        }
        piVar1[0x1a] = 0;
        FUN_0046a898(piVar1 + 0x1a,&local_14,iVar4);
      }
      iVar4 = FUN_0046a898(piVar1 + 0x1a,*param_1,param_1[1]);
      param_1[1] = param_1[1] - iVar4;
      *param_1 = *param_1 + iVar4;
      param_1[2] = param_1[2] + iVar4;
      if (piVar1[0x1a] == 4) {
        iVar4 = param_1[2];
        iVar2 = param_1[5];
        FUN_00468fe0(param_1);
        param_1[2] = iVar4;
        param_1[5] = iVar2;
        *piVar1 = 0xb;
        uVar3 = 0;
      }
      else {
        uVar3 = 0xfffffffd;
      }
    }
  }
  return uVar3;
}
