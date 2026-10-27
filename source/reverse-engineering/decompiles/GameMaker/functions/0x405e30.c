// rea decompile_all
// name: FUN_00405e30
// address: 0x405e30
// body: available
// range: 0x405e30-0x405e9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00405e30(int param_1,byte *param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  byte bVar4;
  undefined2 *puVar5;
  int iVar6;

  iVar2 = 0;
  iVar6 = 0;
  bVar4 = *param_2;
  do {
    puVar5 = *(undefined2 **)(param_1 + -0x40);
    if ((puVar5 != (undefined2 *)0x0) &&
       (iVar6 = CONCAT22((short)((uint)iVar6 >> 0x10),*puVar5), iVar6 != 0)) {
      puVar5 = puVar5 + 1;
      do {
        uVar3 = (undefined2)((uint)iVar2 >> 0x10);
        if (*(byte *)(puVar5 + 3) == bVar4) {
          iVar2 = CONCAT22(uVar3,(ushort)*(byte *)(puVar5 + 3));
          while ((bVar4 = *(byte *)(iVar2 + 6 + (int)puVar5), (bVar4 & 0x80) == 0 &&
                 (bVar4 = bVar4 ^ param_2[iVar2], (bVar4 & 0x80) == 0))) {
            if ((bVar4 & 0xdf) != 0) goto LAB_00405e66;
            iVar2 = iVar2 + -1;
            if (iVar2 == 0) goto LAB_00405e99;
          }
          cVar1 = FUN_00405da4(puVar5 + 3);
          iVar2 = 0;
          if (cVar1 != '\0') {
LAB_00405e99:
            return *(undefined4 *)(puVar5 + 1);
          }
LAB_00405e66:
          uVar3 = (undefined2)((uint)iVar2 >> 0x10);
          bVar4 = *param_2;
        }
        iVar2 = CONCAT22(uVar3,*puVar5);
        puVar5 = (undefined2 *)((int)puVar5 + iVar2);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (*(int **)(param_1 + -0x30) == (int *)0x0) {
      return 0;
    }
    param_1 = **(int **)(param_1 + -0x30);
  } while( true );
}
