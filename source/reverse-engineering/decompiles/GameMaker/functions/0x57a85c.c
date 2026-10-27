// rea decompile_all
// name: FUN_0057a85c
// address: 0x57a85c
// body: available
// range: 0x57a85c-0x57a9e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057a85c(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piStack_10;

  if (*(int *)((int)param_1 + 0x13a) == 1) {
    iVar2 = *(int *)((int)param_1 + 0x13e);
    *(undefined4 *)((int)param_1 + 0x14e) = *(undefined4 *)(iVar2 + 0x1c);
    *(undefined4 *)((int)param_1 + 0x152) = *(undefined4 *)(iVar2 + 0x20);
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
    *(undefined4 *)((int)param_1 + 0x156) = 1;
    *(undefined4 *)((int)param_1 + 0x15a) = 0;
  }
  else {
    if ((*(int *)((int)param_1 + 0x13a) < 1) || (4 < *(int *)((int)param_1 + 0x13a))) {
      iVar2 = *param_1;
      *(undefined4 *)(iVar2 + 0x14) = 0x18;
      *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)((int)param_1 + 0x13a);
      *(undefined4 *)(iVar2 + 0x1c) = 4;
      (**(code **)*param_1)();
    }
    iVar2 = *(int *)((int)param_1 + 0x126) * 8;
    *(int *)((int)param_1 + 0x14e) = (iVar2 + param_1[6] + -1) / iVar2;
    iVar2 = *(int *)((int)param_1 + 0x12a) * 8;
    *(int *)((int)param_1 + 0x152) = (iVar2 + param_1[7] + -1) / iVar2;
    *(undefined4 *)((int)param_1 + 0x156) = 0;
    piStack_10 = (int *)((int)param_1 + 0x13e);
    for (iVar2 = 0; iVar2 < *(int *)((int)param_1 + 0x13a); iVar2 = iVar2 + 1) {
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
      if (10 < *(int *)((int)param_1 + 0x156) + iVar4) {
        *(undefined4 *)(*param_1 + 0x14) = 0xb;
        (**(code **)*param_1)();
      }
      while( true ) {
        if (iVar4 < 1) break;
        iVar1 = *(int *)((int)param_1 + 0x156);
        *(int *)((int)param_1 + 0x156) = *(int *)((int)param_1 + 0x156) + 1;
        *(int *)((int)param_1 + iVar1 * 4 + 0x15a) = iVar2;
        iVar4 = iVar4 + -1;
      }
      piStack_10 = piStack_10 + 1;
    }
  }
  return;
}
