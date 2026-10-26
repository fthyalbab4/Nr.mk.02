// rea decompile_all
// name: FUN_0046738c
// address: 0x46738c
// body: available
// range: 0x46738c-0x467496 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0046738c(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;

  if ((((param_1 == 0) || (*(int *)(param_1 + 0x1c) == 0)) || (param_2 == 0)) ||
     ((*(int *)(*(int *)(param_1 + 0x1c) + 0x18) == 2 ||
      ((*(int *)(*(int *)(param_1 + 0x1c) + 0x18) == 1 &&
       (*(int *)(*(int *)(param_1 + 0x1c) + 4) != 0x2a)))))) {
    uVar3 = 0xfffffffe;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1c);
    if (*(int *)(iVar2 + 0x18) != 0) {
      uVar3 = FUN_00466e2c(*(undefined4 *)(param_1 + 0x30),param_2,param_3,param_3,0);
      *(undefined4 *)(param_1 + 0x30) = uVar3;
    }
    if (param_3 < 3) {
      uVar3 = 0;
    }
    else {
      uVar4 = *(int *)(iVar2 + 0x2c) - 0x106;
      if (uVar4 < param_3) {
        param_3 = uVar4;
      }
      FUN_00466a10();
      *(uint *)(iVar2 + 0x6c) = param_3;
      *(uint *)(iVar2 + 0x5c) = param_3;
      bVar1 = **(byte **)(iVar2 + 0x38);
      *(uint *)(iVar2 + 0x48) = (uint)bVar1;
      *(uint *)(iVar2 + 0x48) =
           ((uint)bVar1 << ((byte)*(undefined4 *)(iVar2 + 0x58) & 0x1f) ^
           (uint)*(byte *)(*(int *)(iVar2 + 0x38) + 1)) & *(uint *)(iVar2 + 0x54);
      for (uVar4 = 0; uVar4 <= param_3 - 3; uVar4 = uVar4 + 1) {
        uVar5 = (*(int *)(iVar2 + 0x48) << ((byte)*(undefined4 *)(iVar2 + 0x58) & 0x1f) ^
                (uint)*(byte *)(*(int *)(iVar2 + 0x38) + 2 + uVar4)) & *(uint *)(iVar2 + 0x54);
        *(uint *)(iVar2 + 0x48) = uVar5;
        *(undefined2 *)(*(int *)(iVar2 + 0x40) + (*(uint *)(iVar2 + 0x34) & uVar4) * 2) =
             *(undefined2 *)(*(int *)(iVar2 + 0x44) + uVar5 * 2);
        *(short *)(*(int *)(iVar2 + 0x44) + *(int *)(iVar2 + 0x48) * 2) = (short)uVar4;
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}
