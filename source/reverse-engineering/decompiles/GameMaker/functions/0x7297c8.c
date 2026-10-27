// rea decompile_all
// name: FUN_007297c8
// address: 0x7297c8
// body: available
// range: 0x7297c8-0x729972 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x007298be) */

void FUN_007297c8(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;

  cVar1 = **(char **)(param_1 + 0x40 + (uint)*(byte *)(param_1 + 0x48) * 4);
  if (cVar1 == '\x01') {
    uVar5 = *(int *)(param_1 + 0x24) + 1;
    if (uVar5 <= *(uint *)(param_1 + 0x20)) {
      iVar7 = (*(uint *)(param_1 + 0x20) - uVar5) + 1;
      do {
        iVar6 = *(int *)(param_1 + 0x40 + (uint)*(byte *)(param_1 + 0x48) * 4);
        *(char *)(iVar6 + uVar5) =
             *(char *)(*(int *)(param_1 + 0x40 + (uint)*(byte *)(param_1 + 0x48) * 4) +
                      (uVar5 - *(int *)(param_1 + 0x24))) + *(char *)(iVar6 + uVar5);
        uVar5 = uVar5 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  else if (cVar1 == '\x02') {
    iVar7 = *(int *)(param_1 + 0x20);
    if (iVar7 != 0) {
      iVar6 = 1;
      do {
        *(char *)(*(int *)(param_1 + 0x40 + (uint)*(byte *)(param_1 + 0x48) * 4) + iVar6) =
             *(char *)(*(int *)(param_1 + 0x40 + ((*(byte *)(param_1 + 0x48) ^ 1) & 0x7f) * 4) +
                      iVar6) +
             *(char *)(*(int *)(param_1 + 0x40 + (*(byte *)(param_1 + 0x48) & 0x7f) * 4) + iVar6);
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  else if (cVar1 == '\x03') {
    iVar7 = *(int *)(param_1 + 0x20);
    if (iVar7 != 0) {
      iVar6 = 1;
      do {
        if (iVar6 - 1U < *(uint *)(param_1 + 0x24)) {
          uVar5 = 0;
        }
        else {
          uVar5 = (uint)*(byte *)(*(int *)(param_1 + 0x40 + (uint)*(byte *)(param_1 + 0x48) * 4) +
                                 (iVar6 - *(uint *)(param_1 + 0x24)));
        }
        *(char *)(*(int *)(param_1 + 0x40 + (uint)*(byte *)(param_1 + 0x48) * 4) + iVar6) =
             (char)((int)(*(byte *)(*(int *)(param_1 + 0x40 +
                                            ((*(byte *)(param_1 + 0x48) ^ 1) & 0x7f) * 4) + iVar6) +
                         uVar5) >> 1) +
             *(char *)(*(int *)(param_1 + 0x40 + (uint)*(byte *)(param_1 + 0x48) * 4) + iVar6);
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  else if (cVar1 == '\x04') {
    uVar4 = 0;
    uVar2 = 0;
    iVar7 = *(int *)(param_1 + 0x20);
    if (iVar7 != 0) {
      iVar6 = 1;
      do {
        if (*(uint *)(param_1 + 0x24) <= iVar6 - 1U) {
          uVar4 = *(undefined1 *)
                   (*(int *)(param_1 + 0x40 + (uint)*(byte *)(param_1 + 0x48) * 4) +
                   (iVar6 - *(int *)(param_1 + 0x24)));
          uVar2 = *(undefined1 *)
                   (*(int *)(param_1 + 0x40 + ((*(byte *)(param_1 + 0x48) ^ 1) & 0x7f) * 4) +
                   (iVar6 - *(int *)(param_1 + 0x24)));
        }
        cVar1 = *(char *)(*(int *)(param_1 + 0x40 + (uint)*(byte *)(param_1 + 0x48) * 4) + iVar6);
        cVar3 = FUN_0072683c(uVar4,*(undefined1 *)
                                    (*(int *)(param_1 + 0x40 +
                                             ((*(byte *)(param_1 + 0x48) ^ 1) & 0x7f) * 4) + iVar6),
                             uVar2);
        *(char *)(*(int *)(param_1 + 0x40 + (uint)*(byte *)(param_1 + 0x48) * 4) + iVar6) =
             cVar3 + cVar1;
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return;
}
