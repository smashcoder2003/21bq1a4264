import * as fs from 'fs/promises';
import * as path from 'path';
import { v4 as uuidv4 } from 'uuid';
let pth;
(async () => {
    pth = await new Promise((resolve) => resolve(path.join(
    "mydir1",
    "piston/jobs",
        uuidv4().toString()
    )));
    console.log(pth);
})();

