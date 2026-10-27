// rea decompile_all
// name: FUN_00550af4
// address: 0x550af4
// body: available
// range: 0x550af4-0x550c7c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00550af4(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piStack_10;

  if (param_1[0x52] == 1) {
    iVar2 = param_1[0x53];
    param_1[0x57] = *(int *)(iVar2 + 0x1c);
    param_1[0x58] = *(int *)(iVar2 + 0x20);
    *(undefined4 *)(iVar2 + 0x34) = 1;
    *(undefined4 *)(iVar2 + 0x38) = 1;
    *(undefined4 *)(iVar2 + 0x3c) = 1;
    *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(iVar2 + 0x24);
    *(undefined4 *)(iVar2 + 0x44) = 1;
    uVar3 = *(uint *)(iVar2 + 0x20) % *(uint *)(iVar2 + 0xc);
    if (uVar3 == 0) {
      uVar3 = *(uint *)(iVar2 + 0xc);
    }
    *(uint *)(iVar2 + 0x48) = uVar3;
    param_1[0x59] = 1;
    param_1[0x5a] = 0;
  }
  else {
    if ((param_1[0x52] < 1) || (4 < param_1[0x52])) {
      iVar2 = *param_1;
      *(undefined4 *)(iVar2 + 0x14) = 0x1a;
      *(int *)(iVar2 + 0x18) = param_1[0x52];
      *(undefined4 *)(iVar2 + 0x1c) = 4;
      (**(code **)*param_1)();
    }
    iVar2 = FUN_0055aefc(param_1[7],param_1[0x4d] << 3);
    param_1[0x57] = iVar2;
    iVar2 = FUN_0055aefc(param_1[8],param_1[0x4e] << 3);
    param_1[0x58] = iVar2;
    param_1[0x59] = 0;
    piStack_10 = param_1 + 0x53;
    for (iVar2 = 0; iVar2 < param_1[0x52]; iVar2 = iVar2 + 1) {
      iVar4 = *piStack_10;
      *(undefined4 *)(iVar4 + 0x34) = *(undefined4 *)(iVar4 + 8);
      *(int *)(iVar4 + 0x38) = *(int *)(iVar4 + 0xc);
      *(int *)(iVar4 + 0x3c) = *(int *)(iVar4 + 0x34) * *(int *)(iVar4 + 0xc);
      *(int *)(iVar4 + 0x40) = *(int *)(iVar4 + 0x34) * *(int *)(iVar4 + 0x24);
      uVar3 = *(uint *)(iVar4 + 0x1c) % *(uint *)(iVar4 + 0x34);
      if (uVar3 == 0) {
        uVar3 = *(uint *)(iVar4 + 0x34);
      }
      *(uint *)(iVar4 + 0x44) = uVar3;
      uVar3 = *(uint *)(iVar4 + 0x20) % *(uint *)(iVar4 + 0x38);
      if (uVar3 == 0) {
        uVar3 = *(uint *)(iVar4 + 0x38);
      }
      *(uint *)(iVar4 + 0x48) = uVar3;
      iVar4 = *(int *)(iVar4 + 0x3c);
      if (10 < param_1[0x59] + iVar4) {
        *(undefined4 *)(*param_1 + 0x14) = 0xd;
        (**(code **)*param_1)();
      }
      while( true ) {
        if (iVar4 < 1) break;
        iVar1 = param_1[0x59];
        param_1[0x59] = param_1[0x59] + 1;
        param_1[iVar1 + 0x5a] = iVar2;
        iVar4 = iVar4 + -1;
      }
      piStack_10 = piStack_10 + 1;
    }
  }
  return;
}
